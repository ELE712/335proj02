/******************************************************
 ** FILE: BubbleSortDecreasing.h
 **
 ** ABSTRACT:
 ** Decreasing Bubble Sort. Taken from in class example
 **
 **
 ** AUTHOR: Alex Liu
 **
 ** CREATION DATE: 1-27-16
 **
 *******************************************************/

#ifndef BUBBLESORTDECREASING_H
#define BUBBLESORTDECREASING_H
#include "BubbleSortTemplate.h"

class BubbleSortDecreasing: public BubbleSortTemplate{
public:
    virtual bool needSwap(SortableVector* sv, int i, int j){
        return sv->smaller(i,j);
    }
};


#endif /* BUBBLESORTDECREASING_H */

