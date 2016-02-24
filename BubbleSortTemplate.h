/******************************************************
 ** FILE: BubbleSortTemplate.h
 **
 ** ABSTRACT:
 ** Template for bs increasing and decreasing. Taken from in class example
 **
 **
 ** AUTHOR: Alex Liu
 **
 ** CREATION DATE: 2-23-16
 **
 *******************************************************/
#ifndef BUBBLESORTTEMPLATE_H
#define BUBBLESORTTEMPLATE_H
#include "SortableVector.h"

class BubbleSortTemplate{
public:
    void sort(SortableVector* sortable){
        bool sorted = false;
        int n = sortable->getSize();
        while (!sorted){
            sorted = true;
            for (int i=1; i<n; i++){
                if (needSwap(sortable,i-1,i)){
                    sortable->swap(i-1,i);
                    sorted=false;
                }
            }
            n--;
        }
    }
    
    virtual bool needSwap(SortableVector* sortableVector, int i, int j)=0;
};

#endif /* BUBBLESORTTEMPLATE_H */

