//
//  interface.cpp
//  Lab1_3s
//
//  Created by  Николай Фонов on 03.10.2021.
//

#include "interface.hpp"


template<typename T>
bool cmp(T a, T b){
    return a < b;
}


template<typename T>
void PrintSequence(Sequence<T>* seq){
    std::cout << "[";
    std::cout << seq->Get(0) << ",";
    for(int i = 1; i < seq->GetLength() - 1; i++){
        std::cout << " " << seq->Get(i) << ",";
    }
    std::cout << " " << seq->Get(seq->GetLength() - 1) << "]\n";
}


int SelectAction(){
    std::cout << "+------------------------------------------+\n"
                 "|                   Menu                   |\n"
                 "|  1 - Input and sort your list/array      |\n"
                 "|  2 - Automatical tests                   |\n"
                 "|  3 - Speed tests                         |\n"
                 "|  4 - Create files for graphs             |\n"
                 "|  0 - Exit                                |\n"
                 "+------------------------------------------+\n"
                 "Enter number: ";
    int type;
    std::cin >> type;
    if (type == 0 or type == 1 or type == 2 or type == 3 or type == 4) {
        return type;
    }
    else{
        std::cout << "Incorrect number!";
        return SelectAction();
    }
}


int SelectSequence(){
    std::cout << "Select type of sequence:\n"
                "   1 - Linked List Sequence\n"
                "   2 - Array Sequence\n"
                "Enter number: ";
    int type;
    std::cin >> type;
    if (type == 1 or type == 2) {
        return type;
    }
    else{
        std::cout << "Incorrect number!";
        return SelectSequence();
    }
}


int SelectTypeVariable(){
    std::cout << "Select type of variables:\n"
                "   1 - Integer\n"
                "   2 - Float\n"
                "Enter number: ";
    int type;
    std::cin >> type;
    if (type == 1 or type == 2) {
        return type;
    }
    else{
        std::cout << "Incorrect number!";
        return SelectTypeVariable();
    }
}

void SelectSortForSpeedTest(){
    int type_sort = SelectSort();
    std::cout << "Enter count of numbers: ";
    int count_num;
    std::cin >> count_num;
    
    if (type_sort == 1){
        std::cout << "Time for Linked list sequence: " << SpeedTestLLS_InsertionSort(count_num) << "\n";
        std::cout << "Time for Array sequence: " << SpeedTestAS_InsertionSort(count_num) << "\n";
    }
    else if (type_sort == 2){
        std::cout << "Time for Linked list sequence: " << SpeedTestLLS_QuickSortL(count_num) << "\n";
        std::cout << "Time for Array sequence: " << SpeedTestAS_QuickSortL(count_num) << "\n";
    }
    else if (type_sort == 3){
        std::cout << "Time for Linked list sequence: " << SpeedTestLLS_QuickSortX(count_num) << "\n";
        std::cout << "Time for Array sequence: " << SpeedTestAS_QuickSortX(count_num) << "\n";
    }
    else if (type_sort == 4){
        std::cout << "Time for Linked list sequence: " << SpeedTestLLS_ShellSort(count_num) << "\n";
        std::cout << "Time for Array sequence: " << SpeedTestAS_ShellSort(count_num) << "\n";
    }
    return;
}


Sequence<int>* InputIntSequence(int type){
    int dim;
    std::cout << "Enter a dimension of list sequence: ";
    std::cin >> dim;
    std::cout << "\n";
    if (type == 1) {
        ListSequence<int>* s = new ListSequence<int>();
        std::cout << "Enter Coordinates (one by one):" << std::endl;
        int coord;
        for(int i = 0; i < dim; i++){
            std::cin >> coord;
            s->Append(coord);
        }
        return s;
    }
    else{
        ArraySequence<int>* s = new ArraySequence<int>();
        std::cout << "Enter Coordinates (one by one):" << std::endl;
        int coord;
        for(int i = 0; i < dim; i++){
            std::cin >> coord;
            s->Append(coord);
        }
        return s;
    }
}


Sequence<float>* InputFloatSequence(int type){
    int dim;
    std::cout << "Enter a dimension of list sequence:";
    std::cin >> dim;
    std::cout << "\n";
    if (type == 1) {
        ListSequence<float>* s = new ListSequence<float>();
        std::cout << "Enter Coordinates (one by one):" << std::endl;
        float coord;
        for(int i = 0; i < dim; i++){
            std::cin >> coord;
            s->Append(coord);
        }
        return s;
    }
    else{
        ArraySequence<float>* s = new ArraySequence<float>();
        std::cout << "Enter Coordinates (one by one):" << std::endl;
        float coord;
        for(int i = 0; i < dim; i++){
            std::cin >> coord;
            s->Append(coord);
        }
        return s;
    }
}


int SelectSort(){
    std::cout << "Select sorting algorythm:\n"
                "   1 - Inserttion Sort\n"
                "   2 - Quick Sort with Lomylo\n"
                "   3 - Quick Sort with Hoara\n"
                "   4 - Shell Sort\n"
                "Enter number: ";
    int type;
    std::cin >> type;
    if (type == 1 or type == 2 or type == 3 or type == 4) {
        return type;
    }
    else{
        std::cout << "Incorrect number!";
        return SelectSort();
    }
}


template<typename T>
Sequence<T>* SortSequence(Sequence<T>* sequence, int type_of_sort){
    Sequence<T>* res = nullptr;
    switch (type_of_sort) {
        case 1:
            res = SequenceSorter<T>::inserttionSortСopy(sequence, cmp);
            break;
        case 2:
            res = SequenceSorter<T>::quickSortLomuloCopy(sequence, 0, sequence->GetLength() - 1, cmp);
            break;
        case 3:
            res = SequenceSorter<T>::quickSortHoaraCopy(sequence, 0, sequence->GetLength() - 1, cmp);
            break;
        case 4:
            res = SequenceSorter<T>::shellSortCopy(sequence, cmp);
            break;
            
        default:
            std::cout << "ERROR!";
            break;
    }
    return res;
}


bool Menu(){
    int action = SelectAction();
    
    if (action == 1){
        int type_of_sequence = SelectSequence();
        int type_of_variable = SelectTypeVariable();
        int type_of_sort;
        if (type_of_variable == 1){
            Sequence<int>* int_sequence_for_sort = InputIntSequence(type_of_sequence);
            type_of_sort = SelectSort();
            Sequence<int>* sorted_sequence = SortSequence(int_sequence_for_sort, type_of_sort);
            std::cout << "Unsorted sequence: ";
            PrintSequence(int_sequence_for_sort);
            std::cout << "Sorted sequence: ";
            PrintSequence(sorted_sequence);
            std::cout << "\n";
        }
        else if (type_of_variable == 2){
            Sequence<float>* float_sequence_for_sort = InputFloatSequence(type_of_sequence);
            type_of_sort = SelectSort();
            Sequence<float>* sorted_sequence = SortSequence(float_sequence_for_sort, type_of_sort);
            std::cout << "Unsorted sequence: ";
            PrintSequence(float_sequence_for_sort);
            std::cout << "Sorted sequence: ";
            PrintSequence(sorted_sequence);
            std::cout << "\n";
        }
        return true;
    }
    else if (action == 2){
        test_swap_arraySequence();
        test_swap_listSequence();
        test_InserttionSort_listSequence();
        test_InserttionSort_arraySequence();
        test_InserttionSort_v_listSequence();
        test_InserttionSort_v_arraySequence();
        test_QuickSort_L_v_listSequence();
        test_QuickSort_L_v_arraySequence();
        test_QuickSort_X_listSequence();
        test_QuickSort_X_arraySequence();
        test_QuickSort_X_v_listSequence();
        test_QuickSort_X_v_arraySequence();
        test_ShellSort_listSequence();
        test_ShellSort_arraySequence();
        test_ShellSort_v_listSequence();
        test_ShellSort_v_arraySequence();
        std::cout << "All tests passed!\n";
        std::cout << "\n";
        return true;
    }
    else if (action == 3){
        SelectSortForSpeedTest();
        std::cout << "\n";
        return true;
    }
    else if (action == 4){
        int step = 100;
        int max = 10000;
        CreateFilesForGraphs_AS(step, max);
        //CreateFilesForGraphs_LLS(step, max / 10);
        std::cout << "\n";
        return true;
    }
    else if (action == 0){
        std::cout << "\n";
        return false;
    }
    return true;
}
