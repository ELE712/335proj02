/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSort.h
 * Author: zekezandbergen
 *
 * Created on February 2, 2016, 2:04 PM
 */

#ifndef BUBBLESORT_H
#define BUBBLESORT_H
#include "SortableVector.h"

class BubbleSort{
public:
    void sortDecreasing(SortableVector* sortable){
        bool sorted = false;
        int n = sortable->getSize();
        while (!sorted){
            sorted = true;
            for (int i=1; i<n; i++){
                if (sortable->smaller(i-1,i)){
                    sortable->swap(i-1,i);
                    sorted=false;
                }
            }
            n--;
        }
    }
    
    
    /*
    void sortDecreasingFaster(SortableVector* sortable){
        bool sorted=false;
        int i=0;
        while (!sorted && (i<sortable->getSize())){
            sorted = true;
            for (int j=i; j<sortable->getSize()-1; ++j){
                if (sortable->smaller(j,j+1)){
                    sortable->swap(j,j+1);
                    sorted=false;
                }
            }
            ++i;
        }
    }
     */
    
    void sortIncreasing(SortableVector* sortable){
        bool sorted = false;
        int n = sortable->getSize();
        while (!sorted){
            sorted = true;
            for (int i=1; i<n; i++){
                if (!sortable->smaller(i-1,i)){
                    sortable->swap(i-1,i);
                    sorted=false;
                }
            }
            n--;
        }
    }
};




#endif /* BUBBLESORT_H */

