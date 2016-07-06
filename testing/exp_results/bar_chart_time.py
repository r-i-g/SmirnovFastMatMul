# -*- coding: utf-8 -*-
"""
Created on Thu Jun 09 16:12:21 2016

Creates from the specified input a bar chart of times

@author: rong
"""
import sys
import re
import os
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

def extract_bar_chart_information(src_file):
    f = open(src_file)
    lines = f.readlines()   
    print lines
    
    file_name = os.path.basename(src_file)
    parameters = os.path.splitext(file_name)[0].split('_')
    matrix_dim = [parameters[2], parameters[3]]
    
    #dist_processors = [int(processor) for processor in re.findall(r'\d+',  lines[5])] 
    dist_processors = int(parameters[6]) * int(parameters[7])
    
    elapsed_time =  float(re.findall("\d+\.\d+", lines[5])[0])
    
    time_spent =  [float(time) for time in re.findall(' \d+\.\d+', lines[6])]
    time_spent[-1] = elapsed_time - time_spent[-1]
    # Normalizing time_spent to the total running time
    #time_spent = [time_category / elapsed_time for time_category in time_spent]
    time_spent_categories = ['comunnicating','additions', 'multiplications', 'reordering', 'other']
    
    print "Processors used:{proc}, elapsed_time:{elapsed_time}, time breakdown:{break_down}".format(proc=dist_processors, 
                                                                                                    elapsed_time=elapsed_time, 
                                                                                                    break_down=time_spent)
    
    return matrix_dim,dist_processors, elapsed_time, dict(zip(time_spent_categories,time_spent))
    

def generate_bar_chart(exp_src_folder, exp_type, out_plot_name):
    import fnmatch

    # Collecting the files we should analyze
    print "Searching files in " + exp_src_folder
    file_list = os.listdir(exp_src_folder)
    data_frames = {'comunnicating':[],
                   'additions':[],
                   'multiplications':[],
                   'reordering':[],
                   'other':[]}
    xticks=[]
        
    for file in file_list:
        if fnmatch.fnmatch(file, '{exp_type}_*'.format(exp_type=exp_type)):
            print "Extracting information for " + file
            try:
                matrix_dim, dist_processors, elapsed_time, time_spent = extract_bar_chart_information(os.path.join(exp_src_folder, file))
                print matrix_dim
                for key, value in time_spent.iteritems():
                    data_frames[key] += [value]
                #xticks += ["P={proc},Dim={matrix_dim}".format(proc=dist_processors, matrix_dim=matrix_dim)]
                xticks += ["P={proc},".format(proc=dist_processors)]
            except:
                pass
            
    print data_frames
    df=pd.DataFrame(data_frames)
    ax = df.plot(kind='bar', stacked=True, logy=True, figsize=(15,15))
    ax.set_xticklabels(xticks, rotation=90)
    return ax
    
if __name__ == "__main__":
    if len(sys.argv) < 4:
        print 'Usage <exp src folder> <exp type> <plot file name>'
    else:
            
        #extract_bar_chart_information(r"C:\Users\rong\Google Drive\study\supercomputer workshop\code\exp_results\titan_72_144_144_5_8_8.txt")
        print sys.argv[1]
        print sys.argv[2]
        print sys.argv[3]
        generate_bar_chart(sys.argv[1], sys.argv[2], sys.argv[3])

