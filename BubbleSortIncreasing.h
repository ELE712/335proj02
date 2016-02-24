/******************************************************
 ** FILE: BubbleSortIncreasing.h
 **
 ** ABSTRACT:
 ** Increasing bubblesort. Taken from in class example
 **
 **
 ** AUTHOR: Alex Liu
 **
 ** CREATION DATE: 2-23-16
 **
 *******************************************************/

#ifndef BUBBLESORTINCREASING_H
#define BUBBLESORTINCREASING_H
#include "BubbleSortTemplate.h"

class BubbleSortIncreasing: public BubbleSortTemplate{
public:
    virtual bool needSwap(SortableVector* sv, int i, int j){
        return !sv->smaller(i,j);
    }

};

#endif /* BUBBLESORTINCREASING_H */

