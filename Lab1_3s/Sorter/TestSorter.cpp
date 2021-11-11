//
//  TestSorter.cpp
//  Lab1_3s
//
//  Created by  Николай Фонов on 02.10.2021.
//

#include "TestSorter.hpp"

bool cmpt(const int a, const int b){
    return a < b;
}

void test_swap_listSequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list1 = new ListSequence<int>(arr1, 10);
    
    SequenceSorter<int>::swap(list1, 0, 1);
    assert(list1->Get(0) == 8);
    assert(list1->Get(1) == 9);
    
    SequenceSorter<int>::swap(list1, 2, 3);
    assert(list1->Get(2) == 4);
    assert(list1->Get(3) == 6);
    
    SequenceSorter<int>::swap(list1, 0, 0);
    assert(list1->Get(0) == 8);
    
    list1->Delete_LinkedListSequence();
}

void test_swap_arraySequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list1 = new ArraySequence<int>(arr1, 10);
    
    SequenceSorter<int>::swap(list1, 0, 1);
    assert(list1->Get(0) == 8);
    assert(list1->Get(1) == 9);
    
    SequenceSorter<int>::swap(list1, 2, 3);
    assert(list1->Get(2) == 4);
    assert(list1->Get(3) == 6);
    
    SequenceSorter<int>::swap(list1, 0, 0);
    assert(list1->Get(0) == 8);
    
    list1->Delete_ArraySequence();
}

void test_InserttionSort_listSequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list1 = new ListSequence<int>(arr1, 10);
    
    SequenceSorter<int>::inserttionSort(list1, cmpt);
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Delete_LinkedListSequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list2 = new ListSequence<int>(arr2, 10);
    
    SequenceSorter<int>::inserttionSort(list1, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list2->Delete_LinkedListSequence();
    
}


void test_InserttionSort_arraySequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list1 = new ArraySequence<int>(arr1, 10);
    
    SequenceSorter<int>::inserttionSort(list1, cmpt);
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Delete_ArraySequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list2 = new ArraySequence<int>(arr2, 10);
    
    SequenceSorter<int>::inserttionSort(list2, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list2->Delete_ArraySequence();
    
}


void test_InserttionSort_v_listSequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list = new ListSequence<int>(arr1, 10);
    auto* list1 = SequenceSorter<int>::inserttionSortСopy(list, cmpt);
    
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Sequence<int>::~Sequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list0 = new ListSequence<int>(arr2, 10);
    auto* list2 = SequenceSorter<int>::inserttionSortСopy(list0, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list2->Sequence<int>::~Sequence();
    
}


void test_InserttionSort_v_arraySequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list = new ArraySequence<int>(arr1, 10);
    auto* list1 = SequenceSorter<int>::inserttionSortСopy(list, cmpt);
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Sequence<int>::~Sequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list0 = new ArraySequence<int>(arr2, 10);
    auto* list2 = SequenceSorter<int>::inserttionSortСopy(list0, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list1->Sequence<int>::~Sequence();
    
}


void test_QuickSort_L_listSequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list1 = new ListSequence<int>(arr1, 10);
    
    SequenceSorter<int>::quickSortLomuto(list1, 0, list1->GetLength() - 1, cmpt);
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Delete_LinkedListSequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list2 = new ListSequence<int>(arr2, 10);
    
    SequenceSorter<int>::quickSortLomuto(list2, 0, list2->GetLength() - 1, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list2->Delete_LinkedListSequence();
    
}


void test_QuickSort_L_arraySequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list1 = new ArraySequence<int>(arr1, 10);
    
    SequenceSorter<int>::quickSortLomuto(list1, 0, list1->GetLength() - 1, cmpt);
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Delete_ArraySequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list2 = new ArraySequence<int>(arr2, 10);
    
    SequenceSorter<int>::quickSortLomuto(list2, 0, list2->GetLength() - 1, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list2->Delete_ArraySequence();
    
}


void test_QuickSort_L_v_listSequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list = new ListSequence<int>(arr1, 10);
    auto* list1 = SequenceSorter<int>::quickSortLomuloCopy(list, 0, list->GetLength() - 1, cmpt);
    
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Sequence<int>::~Sequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list0 = new ListSequence<int>(arr2, 10);
    auto* list2 = SequenceSorter<int>::quickSortLomuloCopy(list0, 0, list0->GetLength() - 1, cmpt);
    SequenceSorter<int>::inserttionSort(list1, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list2->Sequence<int>::~Sequence();
    
}


void test_QuickSort_L_v_arraySequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list = new ArraySequence<int>(arr1, 10);
    auto* list1 = SequenceSorter<int>::quickSortLomuloCopy(list, 0, list->GetLength() - 1, cmpt);
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Sequence<int>::~Sequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list0 = new ArraySequence<int>(arr2, 10);
    auto* list2 = SequenceSorter<int>::quickSortLomuloCopy(list0, 0, list0->GetLength() - 1, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list1->Sequence<int>::~Sequence();
    
}


void test_QuickSort_X_listSequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list1 = new ListSequence<int>(arr1, 10);
    
    SequenceSorter<int>::quickSortHoara(list1, 0, list1->GetLength() - 1, cmpt);
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Delete_LinkedListSequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list2 = new ListSequence<int>(arr2, 10);
    
    SequenceSorter<int>::quickSortHoara(list2, 0, list2->GetLength() - 1, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list2->Delete_LinkedListSequence();
    
}


void test_QuickSort_X_arraySequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list1 = new ArraySequence<int>(arr1, 10);
    
    SequenceSorter<int>::quickSortHoara(list1, 0, list1->GetLength() - 1, cmpt);
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Delete_ArraySequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list2 = new ArraySequence<int>(arr2, 10);
    
    SequenceSorter<int>::quickSortHoara(list2, 0, list2->GetLength() - 1, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list2->Delete_ArraySequence();
    
}


void test_QuickSort_X_v_listSequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list = new ListSequence<int>(arr1, 10);
    auto* list1 = SequenceSorter<int>::quickSortHoaraCopy(list, 0, list->GetLength() - 1, cmpt);
    
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Sequence<int>::~Sequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list0 = new ListSequence<int>(arr2, 10);
    auto* list2 = SequenceSorter<int>::quickSortHoaraCopy(list0, 0, list0->GetLength() - 1, cmpt);
    SequenceSorter<int>::inserttionSort(list1, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list2->Sequence<int>::~Sequence();
    
}


void test_QuickSort_X_v_arraySequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list = new ArraySequence<int>(arr1, 10);
    auto* list1 = SequenceSorter<int>::quickSortHoaraCopy(list, 0, list->GetLength() - 1, cmpt);
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Sequence<int>::~Sequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list0 = new ArraySequence<int>(arr2, 10);
    auto* list2 = SequenceSorter<int>::quickSortHoaraCopy(list0, 0, list0->GetLength() - 1, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list1->Sequence<int>::~Sequence();
    
}


void test_ShellSort_listSequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list1 = new ListSequence<int>(arr1, 10);
    
    SequenceSorter<int>::shellSort(list1, cmpt);
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Delete_LinkedListSequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list2 = new ListSequence<int>(arr2, 10);
    
    SequenceSorter<int>::shellSort(list1, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list2->Delete_LinkedListSequence();
    
}


void test_ShellSort_arraySequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list1 = new ArraySequence<int>(arr1, 10);
    
    SequenceSorter<int>::shellSort(list1, cmpt);
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Delete_ArraySequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list2 = new ArraySequence<int>(arr2, 10);
    
    SequenceSorter<int>::shellSort(list2, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list2->Delete_ArraySequence();
    
}


void test_ShellSort_v_listSequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list = new ListSequence<int>(arr1, 10);
    auto* list1 = SequenceSorter<int>::shellSortCopy(list, cmpt);
    
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Sequence<int>::~Sequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list0 = new ListSequence<int>(arr2, 10);
    auto* list2 = SequenceSorter<int>::shellSortCopy(list0, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list2->Sequence<int>::~Sequence();
    
}


void test_ShellSort_v_arraySequence(){
    int arr1[] = {9, 8, 6, 4, 1, 10, 55, 0, 9, 1};
    auto* list = new ArraySequence<int>(arr1, 10);
    auto* list1 = SequenceSorter<int>::shellSortCopy(list, cmpt);
    assert(list1->Get(0) == 0);
    assert(list1->Get(1) == 1);
    assert(list1->Get(2) == 1);
    assert(list1->Get(3) == 4);
    assert(list1->Get(4) == 6);
    assert(list1->Get(5) == 8);
    assert(list1->Get(6) == 9);
    assert(list1->Get(7) == 9);
    assert(list1->Get(8) == 10);
    assert(list1->Get(9) == 55);
    
    list1->Sequence<int>::~Sequence();
    
    int arr2[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    auto* list0 = new ArraySequence<int>(arr2, 10);
    auto* list2 = SequenceSorter<int>::shellSortCopy(list0, cmpt);
    assert(list2->Get(0) == 0);
    assert(list2->Get(1) == 0);
    assert(list2->Get(2) == 0);
    assert(list2->Get(3) == 0);
    assert(list2->Get(4) == 0);
    assert(list2->Get(5) == 0);
    assert(list2->Get(6) == 0);
    assert(list2->Get(7) == 0);
    assert(list2->Get(8) == 0);
    assert(list2->Get(9) == 0);
    
    list1->Sequence<int>::~Sequence();
    
}


