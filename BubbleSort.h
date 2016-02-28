/******************************************************
 ** FILE: BubbleSort.h
 **
 ** ABSTRACT:
 ** BubbleSort algorithms. Taken from in class example
 **
 **
 ** AUTHOR: Ezekiel Zandbergen, Cynthia Obia
 **
 ** CREATION DATE: 2-23-16
 **
 *******************************************************/
 
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
