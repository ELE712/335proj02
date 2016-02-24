/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BubbleSortIncreasing.h
 * Author: zekezandbergen
 *
 * Created on February 9, 2016, 2:00 PM
 */

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

