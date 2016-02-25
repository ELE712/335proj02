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
    CDatabaseSortable(vector<CEmployee*> emp_vec): CDatabase(emp_vec){}
    virtual unsigned int getSize() const{
        return m_allEmp.size();
    }
    
    virtual void swap(int i,int j){
        CEmployee* temp = m_allEmp[i];
        m_allEmp[i] = m_allEmp[j];
        m_allEmp[j] = temp;
    }
};

#endif /* CDATABASESORTABLE_H */

