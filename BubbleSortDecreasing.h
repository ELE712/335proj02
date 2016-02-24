/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortDecreasing.h
 * Author: zekezandbergen
 *
 * Created on February 9, 2016, 1:56 PM
 */

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

