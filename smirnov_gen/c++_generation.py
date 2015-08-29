__author__ = 'rong'

'''
Creating c++ code to multiply by smirnov
'''

import sys

class AlgGen():

    def __init__(self, alg_tuple):
        self._alg_tuple = alg_tuple
        self._alg_tuple_as_string = ''.join(map(str,self._alg_tuple))

        self._a_row_dim = self._alg_tuple[0]
        self._a_col_dim = self._alg_tuple[1]
        self._b_row_dim = self._alg_tuple[1]
        self._b_col_dim = self._alg_tuple[2]

        from os import path
        self._outfile = open('./SmirnovAlgorithm_{alg_tuple}.cpp'.format(alg_tuple=self._alg_tuple_as_string),'a')

    def write_lines(self, lines, indent_level=1):
        # Splitting the lines by \n and printing them accordingly
        for line in lines.rstrip('\n').split('\n'):
            self.write_line(line,indent_level)

    def write_line(self, line, indent_level=1):
        self._outfile.write(' ' * 4 * indent_level + line + '\n')

    def _create_function_defnition(self, type, index):
        function_definition = "void SmirnovFastMul::Computation::SmirnovAlgorithm_{alg_tuple}::{type}_add{index}(std::vector<Matrix>& sub_matrices, " \
                             "SmirnovFastMul::Computation::Matrix& out){{".format(alg_tuple=self._alg_tuple_as_string,
                                                                                    type=type,
                                                                                    index=index)
        self.write_line(function_definition, 0)

    def _create_simple_function_defnition(self, type, index):
        function_definition = "void {type}_add{index}_{alg_tuple}(std::vector<Matrix>& sub_matrices, " \
                             "Matrix& out){{".format(alg_tuple=self._alg_tuple_as_string,
                                                                                    type=type,
                                                                                    index=index)
        self.write_line(function_definition, 0)

    def _end_function_definiton(self, indent=0):
        self.write_line("}",indent)

    def _create_variables(self, algorithm_entrance, indent=1):
        used_submatrices = []

        for index, scalar in enumerate(algorithm_entrance):
            if scalar == '0':
                continue;
            used_submatrices.append(index)
            stride = "const int stride{index} = sub_matrices.at({index}).get_stride();".format(index=index)
            self.write_line(stride,indent)
            data = "const double* data{index} = sub_matrices.at({index}).get_data();".format(index=index)
            self.write_line(data,indent)

        # Creating variables for the out matrix
        stride_out = "const int stride_out = out.get_stride();"
        self.write_line(stride_out,indent)
        data_out = "double* data_out = out.get_data();"
        self.write_line(data_out,indent)

    def _create_iteration(self, indent=2):
        row_iter = 'for (int i = 0; i < out.get_row_dimension(); i++) {'
        self.write_line(row_iter, indent-1)
        col_iter = 'for (int j = 0; j < out.get_col_dimension(); j++) {'
        self.write_line(col_iter,indent)

    def _end_iteration(self, indent=2):
        self.write_line("}",indent)  # Closing col for
        self.write_line("}", indent-1)    # Closing row for

    def _create_object_definiton(self,type,entrance):
        class_defintion = "class {type}_add{entrance} : public SmirnovFastMul::Computation::AlgorithmEntrance {{".format(type=type,entrance=entrance)
        self.write_line(class_defintion,0)

    def _end_object_definition(self):
        self.write_line("};",0)

    def _create_function_ptr_definiton(self):
        self.write_line("void alg_entrance(vector<Matrix>& sub_matrices, Matrix& out) {")

    def write_object_algorithm(self, algorithm_path, type):
        alg = open(algorithm_path, 'r')
        # Each row represents an entrance in the output algorithm
        for entrance, entrance_alg in enumerate([line.rstrip('\n').split(',') for line in alg]):
            self._create_object_definiton(type,entrance)
            self._create_function_ptr_definiton()

            self._create_variables(entrance_alg,2)
            self._create_iteration(3)

            data_out =  "data_out[i * stride_out + j] = "
            for index, scalar in enumerate(entrance_alg):
                if scalar == '0':
                    continue
                coeef = scalar
                if float(scalar) > 0:
                        coeef = "+"+scalar
                data_out += ' {coeef} * data{index}[i * stride{index} + j]'.format(coeef=coeef, index=index)
            data_out += ";"
            self.write_line(data_out,4)

            self._end_iteration(3)
            self._end_function_definiton(1)
            self._end_object_definition()
        alg.close()

    def write_algorithm(self, algorithm_path, type):
        alg = open(algorithm_path, 'r')
        # Each row represents an entrance in the output algorithm
        for entrance, entrance_alg in enumerate([line.rstrip('\n').split(',') for line in alg]):
            self._create_function_defnition(type,entrance)
            self._create_variables(entrance_alg)
            self._create_iteration()

            data_out =  "data_out[i * stride_out + j] = "
            for index, scalar in enumerate(entrance_alg):
                if scalar == '0':
                    continue
                coeef = scalar
                if float(scalar) > 0:
                        coeef = "+"+scalar
                data_out += ' {coeef} * data{index}[i * stride{index} + j]'.format(coeef=coeef, index=index)
            data_out += ";"
            self.write_line(data_out,3)

            self._end_iteration()
            self._end_function_definiton()
        alg.close()

    def write_simple_algorithm(self, algorithm_path, type):
        alg = open(algorithm_path, 'r')
        # Each row represents an entrance in the output algorithm
        for entrance, entrance_alg in enumerate([line.rstrip('\n').split(',') for line in alg]):
            self._create_simple_function_defnition(type,entrance)
            self._create_variables(entrance_alg)
            self._create_iteration()

            data_out =  "data_out[i * stride_out + j] = "
            for index, scalar in enumerate(entrance_alg):
                if scalar == '0':
                    continue
                coeef = scalar
                if float(scalar) > 0:
                        coeef = "+"+scalar
                data_out += ' {coeef} * data{index}[i * stride{index} + j]'.format(coeef=coeef, index=index)
            data_out += ";"
            self.write_line(data_out,3)

            self._end_iteration()
            self._end_function_definiton()
        alg.close()

    def _write_ctor_definition(self):
        self.write_line("SmirnovFastMul::Computation::SmirnovAlgorithm_{alg_tuple}::SmirnovAlgorithm_{alg_tuple}() : "
                        "SmirnovFastMul::Computation::SmirnovAlgorithm({a_row_dim},{a_col_dim},{b_col_dim}){{".format(alg_tuple=self._alg_tuple_as_string,
                                                                                                                      a_row_dim=self._a_row_dim,
                                                                                                                      a_col_dim=self._a_col_dim,
                                                                                                                      b_col_dim=self._b_col_dim),0)

    def write_constructor(self):

        self._write_ctor_definition()
        for i in range(40):
            self.write_line("add_alpha_entrance((AlgorithmEntrance)&SmirnovFastMul::Computation::SmirnovAlgorithm_336::alpha_add{index});".format(index=i))
            self.write_line("add_beta_entrance((AlgorithmEntrance)&SmirnovFastMul::Computation::SmirnovAlgorithm_336::beta_add{index});".format(index=i))
        for i in range(self._a_row_dim * self._b_col_dim):
            self.write_line("add_gamma_entrance((AlgorithmEntrance)&SmirnovFastMul::Computation::SmirnovAlgorithm_336::gamma_add{index});".format(index=i))
        self._end_function_definiton()

    def write_simple_constructor(self):

        self._write_ctor_definition()
        for i in range(40):
            self.write_line("add_alpha_entrance((AlgorithmEntrance)&alpha_add{index}_{alg_tuple});".format(index=i, alg_tuple=self._alg_tuple_as_string))
            self.write_line("add_beta_entrance((AlgorithmEntrance)&beta_add{index}_{alg_tuple});".format(index=i, alg_tuple=self._alg_tuple_as_string))
        for i in range(self._a_row_dim * self._b_col_dim):
            self.write_line("add_gamma_entrance((AlgorithmEntrance)&gamma_add{index}_{alg_tuple});".format(index=i, alg_tuple=self._alg_tuple_as_string))
        self._end_function_definiton()

    def _write_object_constructor(self):

        self._write_ctor_definition()
        for i in range(40):
            self.write_line("add_alpha_entrance(alpha_add{index}());".format(index=i))
            self.write_line("add_beta_entrance(beta_add{index}());".format(index=i))
        for i in range(self._a_row_dim * self._b_col_dim):
            self.write_line("add_gamma_entrance(gamma_add{index}());".format(index=i))
        self._end_function_definiton()

    def create_object_scripts(self):
        self.write_object_algorithm('./smirnov_a_{alg_tuple}.txt'.format(alg_tuple=self._alg_tuple_as_string), 'alpha')
        self.write_object_algorithm('./smirnov_b_{alg_tuple}.txt'.format(alg_tuple=self._alg_tuple_as_string), 'beta')
        self.write_object_algorithm('./smirnov_c_{alg_tuple}.txt'.format(alg_tuple=self._alg_tuple_as_string), 'gamma')
        self._write_object_constructor()

    def create_simple_scripts(self):
        self.write_simple_algorithm('./smirnov_a_{alg_tuple}.txt'.format(alg_tuple=self._alg_tuple_as_string), 'alpha')
        self.write_simple_algorithm('./smirnov_b_{alg_tuple}.txt'.format(alg_tuple=self._alg_tuple_as_string), 'beta')
        self.write_simple_algorithm('./smirnov_c_{alg_tuple}.txt'.format(alg_tuple=self._alg_tuple_as_string), 'gamma')
        self.write_simple_constructor()

if __name__ == '__main__':
    '''ROW_DIM = sys.argv[0]
    COL_DIM = sys.argv[1]
    ALG_ROW_DIM = sys.argv[2]
    ALG_COL_DIM = sys.argv[3]'''
    gen_3_3_6 = AlgGen((3,3,6))
    gen_3_3_6.create_simple_scripts()
    gen_3_3_6 = AlgGen((3,6,3))
    gen_3_3_6.create_simple_scripts()
    gen_3_3_6 = AlgGen((6,3,3))
    gen_3_3_6.create_simple_scripts()

