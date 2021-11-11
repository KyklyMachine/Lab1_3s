//
//  TimeTestSorterForAnalysis.cpp
//  Lab1_3s
//
//  Created by  Николай Фонов on 02.10.2021.
//

#include "TimeTestSorterForAnalysis.hpp"
#include <string>
#include <ctime>
#include <iostream>
#include <fstream>


void LLS_InsertionSort(int step, int max){
    std::ofstream file("/Users/nikolajfonov/Documents/Labs/Lab1_3s/Lab1_3s/Files for gtaphs/LLS_InsertionSort.txt", std::ofstream::out);
    
    for(int i = step; i < max; i += step){
        file << SpeedTestLLS_InsertionSort(i) << std::endl;
    }
    file << "Step: " << step << std::endl;
    file.close();
}


void AS_InsertionSort(int step, int max){
    std::ofstream file("/Users/nikolajfonov/Documents/Labs/Lab1_3s/Lab1_3s/Files for gtaphs/AS_InsertionSort.txt", std::ofstream::out);
    
    for(int i = step; i < max; i += step){
        file << SpeedTestAS_InsertionSort(i) << std::endl;
    }
    file << "Step: " << step << std::endl;
    file.close();
}


void LLS_QuickSortL(int step, int max){
    std::ofstream file("/Users/nikolajfonov/Documents/Labs/Lab1_3s/Lab1_3s/Files for gtaphs/LLS_QuickSortL.txt", std::ofstream::out);
    
    for(int i = step; i < max; i += step){
        file << SpeedTestLLS_QuickSortL(i) << std::endl;
    }
    file << "Step: " << step << std::endl;
    file.close();
}


void AS_QuickSortL(int step, int max){
    std::ofstream file("/Users/nikolajfonov/Documents/Labs/Lab1_3s/Lab1_3s/Files for gtaphs/AS_QuickSortL.txt", std::ofstream::out);
    
    for(int i = step; i < max; i += step){
        file << SpeedTestAS_QuickSortL(i) << std::endl;
    }
    file << "Step: " << step << std::endl;
    file.close();
}


void LLS_QuickSortX(int step, int max){
    std::ofstream file("/Users/nikolajfonov/Documents/Labs/Lab1_3s/Lab1_3s/Files for gtaphs/LLS_QuickSortX.txt", std::ofstream::out);
    
    for(int i = step; i < max; i += step){
        file << SpeedTestLLS_QuickSortX(i) << std::endl;
    }
    file << "Step: " << step << std::endl;
    file.close();
}


void AS_QuickSortX(int step, int max){
    std::ofstream file("/Users/nikolajfonov/Documents/Labs/Lab1_3s/Lab1_3s/Files for gtaphs/AS_QuickSortX.txt", std::ofstream::out);
    
    for(int i = step; i < max; i += step){
        file << SpeedTestAS_QuickSortX(i) << std::endl;
    }
    file << "Step: " << step << std::endl;
    file.close();
}


void LLS_ShellSort(int step, int max){
    std::ofstream file("/Users/nikolajfonov/Documents/Labs/Lab1_3s/Lab1_3s/Files for gtaphs/LLS_ShellSort.txt", std::ofstream::out);
    
    for(int i = step; i < max; i += step){
        file << SpeedTestLLS_ShellSort(i) << std::endl;
    }
    file << "Step: " << step << std::endl;
    file.close();
}


void AS_ShellSort(int step, int max){
    std::ofstream file("/Users/nikolajfonov/Documents/Labs/Lab1_3s/Lab1_3s/Files for gtaphs/AS_ShellSort.txt", std::ofstream::out);
    
    for(int i = step; i < max; i += step){
        file << SpeedTestAS_ShellSort(i) << std::endl;
    }
    file << "Step: " << step << std::endl;
    file.close();
}


void CreateFilesForGraphs_AS(int step, int max){
    AS_InsertionSort(step, max);
    AS_QuickSortL(step, max);
    AS_QuickSortX(step, max);
    AS_ShellSort(step, max);
}

void CreateFilesForGraphs_LLS(int step, int max){
    LLS_InsertionSort(step, max);
    LLS_QuickSortL(step, max);
    LLS_QuickSortX(step, max);
    LLS_ShellSort(step, max);
}
