//
//  interface.hpp
//  Lab1_3s
//
//  Created by  Николай Фонов on 03.10.2021.
//

#ifndef interface_hpp
#define interface_hpp

#include <stdio.h>
#include "Sorter.hpp"
#include "ListSequence.hpp"
#include "ArraySequence.hpp"
#include <iostream>
#include "TestSorter.hpp"
#include "TimeTestSorter.hpp"
#include "TimeTestSorterForAnalysis.hpp"

template<typename T>
void PrintSequence(Sequence<T>* seq);

int SelectSequence();
int SelectTypeVariable();
int SelectSort();
int SelectAction();

Sequence<int>* InputIntSequence(int type);
Sequence<float>* InputFloatSequence(int type);


bool Menu();

#endif /* interface_hpp */
