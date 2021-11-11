//
//  TimeTestSorter.hpp
//  Lab1_3s
//
//  Created by  Николай Фонов on 02.10.2021.
//

#ifndef TimeTestSorter_hpp
#define TimeTestSorter_hpp

#include <stdio.h>
#include "Sorter.hpp"
#include "ListSequence.hpp"
#include "ArraySequence.hpp"
#include <iostream>

clock_t SpeedTestLLS_InsertionSort(int num);
clock_t SpeedTestAS_InsertionSort(int num);
clock_t SpeedTestLLS_ShellSort(int num);
clock_t SpeedTestAS_ShellSort(int num);
clock_t SpeedTestLLS_QuickSortL(int num);
clock_t SpeedTestAS_QuickSortL(int num);
clock_t SpeedTestLLS_QuickSortX(int num);
clock_t SpeedTestAS_QuickSortX(int num);

#endif /* TimeTestSorter_hpp */
