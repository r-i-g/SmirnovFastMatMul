# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""
import os
import sys
import glob
import re
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.legend_handler import HandlerLine2D
import collections


# Read all the files specified 
def get_files(src_dir, regex):
    """
    Get all the files that match the regex
    """
    exp_files = glob.glob(src_dir + "/" +regex)
    smirnov_files = filter(lambda f: 'smirnov' in os.path.basename(f), exp_files)
    scalapack_files = filter(lambda f: 'scalapack' in os.path.basename(f), exp_files)
    return smirnov_files, scalapack_files

def generate_strong_scaling_data_set(src_dir, exp_files, offset=0, normalize=1):
    """
    Creating the x and y pairs for the creation of the graph
    """
    x = []
    y = []
    points = {}
    for f_exp in exp_files:    
        # Calculate the operations of the matrix 
        file_name = os.path.basename(f_exp)
        parameters = os.path.splitext(file_name)[0].split('_')
        total_operations = int(parameters[2]) * int(parameters[3]) * int(parameters[4])
        num_processes = int(parameters[6]) * int(parameters[7])
        #print num_processes
        
        #running_time
        f = open(os.path.join(src_dir, file_name))
        lines = f.readlines()
        #print lines
        try:
            elapsed_time = float(re.findall("\d+\.\d+", lines[5 + offset])[0])
            total_runtime = elapsed_time * 10.0**9  
            #x += [num_processes]
            #y += [elapsed_time]
            if normalize == 1:
                normalization = 1
            elif normalize == 2:
                normalization = num_processes
            
            points[num_processes] = elapsed_time * normalization
        except:
            pass
        #print total_operations, total_runtime, total_operations / total_runtime
               
    od = collections.OrderedDict(sorted(points.items()))
    for k, v in od.iteritems():
        x += [k]
        y += [v]

    return x,y 
    
#def extract_bar_chart_information():
        
    
if __name__ == "__main__":
    if len(sys.argv) < 4:
        print 'Usage <src_dir> <search regex> <normalization==[1,2,3]>'
    else:
       src_dir = sys.argv[1]
       smir,scala = get_files(src_dir, sys.argv[2])
       normalization = int(sys.argv[3])
       print 'normalization factor is ' +str(normalization)
       smir_x, smir_y = generate_strong_scaling_data_set(src_dir, smir, normalize=normalization)
       scala_x, scala_y = generate_strong_scaling_data_set(src_dir, scala , -1, normalization)
       p_smir, = plt.plot(smir_x, smir_y, 'r^-', label='smirnov')
       p_scala, = plt.plot(scala_x, scala_y, 'bs-', label='ScaLAPACK')
       plt.xlabel("Processors number")
       if normalization == 1:
           plt.ylabel("Execution time")
       else:
           plt.ylabel("Execution time normalized")
       ax = plt.gca()
       #plt.legend(bbox_to_anchor=(1, 0.8), bbox_transform=ax.transAxes)
       plt.legend((p_smir, p_scala),('smirnov','ScaLAPACK'))
       #ax = plt.plot(smir_x, smir_y, 'r^-', scala_x, scala_y, 'bs-')
       plt.show()
        
    