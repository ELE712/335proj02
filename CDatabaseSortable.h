/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CDatabaseSortable.h
 * Author: zekezandbergen
 *
 * Created on February 23, 2016, 9:06 PM
 */

#ifndef CDATABASESORTABLE_H
#define CDATABASESORTABLE_H
#include "CDatabase.h"
#include "SortableVector.h"

class CDatabaseSortable: public CDatabase, public SortableVector{
    CDatabaseSortable(CDatabase& data): CDatabase(data){}
    
    
};


#endif /* CDATABASESORTABLE_H */

