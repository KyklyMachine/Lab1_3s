//
//  Sorter.hpp
//  Lab1_3s
//
//  Created by  Николай Фонов on 02.10.2021.
//

#ifndef Sorter_hpp
#define Sorter_hpp
#include "Sequence.hpp"
#include <stdio.h>
#include <iostream>
#include <math.h>


template <class T>
class SequenceSorter{
public:
    static void swap(Sequence<T> *sequence ,int i, int j){
        T temp;
        temp = sequence->Get(i);
        sequence->Set(sequence->Get(j), i);
        sequence->Set(temp, j);
    }
    
    
    static void inserttionSort(Sequence<T>* sequence, bool (*cmp)(T, T)){
        if (sequence->GetLength() <= 1)
            return;
        
        for (int i = 1; i < sequence->GetLength(); i++){
            int j = i - 1;
            T temp = sequence->Get(i);
            while (cmp(temp, sequence->Get(j)) && j >= 0){
                sequence->Set(sequence->Get(j), j + 1);
                j--;
                if (j == -1) break;
            }
            sequence->Set(temp, j + 1);
        }
    }
    
    
    static Sequence<T>* inserttionSortСopy(Sequence<T>* sequence, bool (*cmp)(T, T)){
        if (sequence->GetLength() <= 1)
            return sequence;
        
        auto* res_seq = sequence->Copy(sequence);
        
        for (int i = 1; i < res_seq->GetLength(); i++){
            int j = i - 1;
            T temp = res_seq->Get(i);
            while (cmp(temp, res_seq->Get(j)) && j >= 0){
                res_seq->Set(res_seq->Get(j), j + 1);
                j--;
                if (j == -1) break;
            }
            res_seq->Set(temp, j + 1);
        }
        return res_seq;
    }
    
    
    static int partitionLomuto(Sequence<T> *sequence, int left, int right, bool (*cmp)(T, T)){
        T x = sequence->Get(right);
        int i = left - 1;
        for (int j = left; j < right; j++){
            if (cmp(sequence->Get(j), x)){
                i++;
                swap(sequence, i, j);
            }
        }
        swap(sequence, i + 1, right);
        return i + 1;
    }
    
    
    static void quickSortLomuto(Sequence<T> *sequence, int left, int right, bool (*cmp)(T, T)){
        if (sequence->GetLength() <= 1)
            return;
        if (left < right){
            int q = partitionLomuto(sequence, left, right, cmp);
            quickSortLomuto(sequence, left, q - 1, cmp);
            quickSortLomuto(sequence, q + 1, right, cmp);
        }
        return;
    }
    
    
    static int partitionHoara(Sequence<T> *sequence, int left, int right, bool (*cmp)(T, T)){
        double pivot = (sequence->Get(left) + sequence->Get(right)) / 2;
        int i = left;
        int j = right;
        while (true){
            while (sequence->Get(i) < pivot) {
                i++;
            }
            while (sequence->Get(j) > pivot) {
                j--;
            }
            if (i >= j) {
                return j;
            }
            swap(sequence, i++, j--);
            
            
        }
    }
    
    
    static void quickSortHoara(Sequence<T> *sequence, int left, int right, bool (*cmp)(T, T)){
        if (sequence->GetLength() <= 1)
            return;
        if (left < right){
            int q = partitionHoara(sequence, left, right, cmp);
            quickSortHoara(sequence, left, q, cmp);
            quickSortHoara(sequence, q + 1, right, cmp);
        }
        return;
    }
    
    
    static Sequence<T>* quickSortLomuloCopy(Sequence<T> *sequence, int left, int right, bool (*cmp)(T, T)){
        if (sequence->GetLength() <= 1)
            return sequence;
        auto* res_seq = sequence->Copy(sequence);
        if (left < right){
            int q = partitionLomuto(res_seq, left, right, cmp);
            quickSortLomuto(res_seq, left, q - 1, cmp);
            quickSortLomuto(res_seq, q + 1, right, cmp);
        }
        return res_seq;
    }
    
    
    static Sequence<T>* quickSortHoaraCopy(Sequence<T> *sequence, int left, int right, bool (*cmp)(T, T)){
        if (sequence->GetLength() <= 1)
            return sequence;
        auto* res_seq = sequence->Copy(sequence);
        if (left < right){
            int q = partitionHoara(res_seq, left, right, cmp);
            quickSortHoara(res_seq, left, q, cmp);
            quickSortHoara(res_seq, q + 1, right, cmp);
        }
        return res_seq;
    }
    
    
    static void shellSort(Sequence<T> *sequence, bool (*cmp)(T, T)){
        if (sequence->GetLength() <= 1)
            return;
        int i, j, step;
        T tmp;
        for (step = sequence->GetLength() / 2; step > 0; step /= 2){
            for (i = step; i < sequence->GetLength(); i++)
            {
                tmp = sequence->Get(i);
                for (j = i; j >= step; j -= step)
                {
                    if (cmp(tmp, sequence->Get(j - step)))
                        sequence->Set(sequence->Get(j - step) ,j);
                    else
                        break;
                }
                sequence->Set(tmp, j);
            }
        }
    }
    
    
    static Sequence<T>* shellSortCopy(Sequence<T> *sequence, bool (*cmp)(T, T)){
        auto* res_seq = sequence->Copy(sequence);
        int i, j, step;
        T tmp;
        for (step = res_seq->GetLength() / 2; step > 0; step /= 2){
            for (i = step; i < res_seq->GetLength(); i++)
            {
                tmp = res_seq->Get(i);
                for (j = i; j >= step; j -= step)
                {
                    if (cmp(tmp, res_seq->Get(j - step)))
                        res_seq->Set(res_seq->Get(j - step) ,j);
                    else
                        break;
                }
                res_seq->Set(tmp, j);
            }
        }
        return res_seq;
    }
};


#endif /* Sorter_hpp */
