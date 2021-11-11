//
//  TimeTestSorter.cpp
//  Lab1_3s
//
//  Created by  Николай Фонов on 02.10.2021.
//

#include "TimeTestSorter.hpp"
#include <assert.h>
#include <string>
#include <ctime>
#include <iostream>
#include <fstream>
#include <ctime>
 

bool cmp_int(int a, int b){
    return a < b;
}


clock_t SpeedTestLLS_InsertionSort(int num){
    auto* t = new ListSequence<int>();
    for (int i = 0; i < num; ++i){
        t->Append(std::rand() % 1000 + 1);
    }
    clock_t start_time = clock();
    SequenceSorter<int>::inserttionSort(t, cmp_int);
    clock_t end_time = clock();
    clock_t search_time = end_time - start_time;
    t->Delete_LinkedListSequence();
    return search_time/1000;
}


clock_t SpeedTestAS_InsertionSort(int num){
    auto* t = new ArraySequence<int>();
    for (int i = 0; i < num; ++i){
        t->Append(std::rand() % 1000 + 1);
    }
    clock_t start_time = clock();
    SequenceSorter<int>::inserttionSort(t, cmp_int);
    clock_t end_time = clock();
    clock_t search_time = end_time - start_time;
    t->Delete_ArraySequence();
    return search_time/1000;
}


clock_t SpeedTestLLS_ShellSort(int num){
    auto* t = new ListSequence<int>();
    for (int i = 0; i < num; ++i){
        t->Append(std::rand() % 1000 + 1);
    }
    clock_t start_time = clock();
    SequenceSorter<int>::shellSort(t, cmp_int);
    clock_t end_time = clock();
    clock_t search_time = end_time - start_time;
    t->Delete_LinkedListSequence();
    return search_time/1000;
}


clock_t SpeedTestAS_ShellSort(int num){
    auto* t = new ArraySequence<int>();
    for (int i = 0; i < num; ++i){
        t->Append(std::rand() % 1000 + 1);
    }
    clock_t start_time = clock();
    SequenceSorter<int>::shellSort(t, cmp_int);
    clock_t end_time = clock();
    clock_t search_time = end_time - start_time;
    t->Delete_ArraySequence();
    return search_time/1000;
}


clock_t SpeedTestLLS_QuickSortL(int num){
    auto* t = new ListSequence<int>();
    for (int i = 0; i < num; ++i){
        t->Append(std::rand() % 1000 + 1);
    }
    clock_t start_time = clock();
    SequenceSorter<int>::quickSortLomuto(t, 0, t->GetLength() - 1, cmp_int);
    clock_t end_time = clock();
    clock_t search_time = end_time - start_time;
    t->Delete_LinkedListSequence();
    return search_time/1000;
}


clock_t SpeedTestAS_QuickSortL(int num){
    auto* t = new ArraySequence<int>();
    for (int i = 0; i < num; ++i){
        t->Append(std::rand() % 1000 + 1);
    }
    clock_t start_time = clock();
    SequenceSorter<int>::quickSortLomuto(t, 0, t->GetLength() - 1, cmp_int);
    clock_t end_time = clock();
    clock_t search_time = end_time - start_time;
    t->Delete_ArraySequence();
    return search_time/1000;
}


clock_t SpeedTestLLS_QuickSortX(int num){
    auto* t = new ListSequence<int>();
    for (int i = 0; i < num; ++i){
        t->Append(std::rand() % 1000 + 1);
    }
    clock_t start_time = clock();
    SequenceSorter<int>::quickSortHoara(t, 0, t->GetLength() - 1, cmp_int);
    clock_t end_time = clock();
    clock_t search_time = end_time - start_time;
    t->Delete_LinkedListSequence();
    return search_time/1000;
}


clock_t SpeedTestAS_QuickSortX(int num){
    auto* t = new ArraySequence<int>();
    for (int i = 0; i < num; ++i){
        t->Append(std::rand() % 1000 + 1);
    }
    clock_t start_time = clock();
    SequenceSorter<int>::quickSortHoara(t, 0, t->GetLength() - 1, cmp_int);
    clock_t end_time = clock();
    clock_t search_time = end_time - start_time;
    t->Delete_ArraySequence();
    return search_time/1000;
}


