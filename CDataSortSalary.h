/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   CDataSortSalary.h
 * Author: zekezandbergen
 *
 * Created on February 23, 2016, 9:15 PM
 */

#ifndef CDATASORTSALARY_H
#define CDATASORTSALARY_H
#include "CDatabaseSortable.h"

class CDataSortSalary: public CDatabaseSortable{
public:
    
    virtual bool smaller(int i,int j) const{
        if ((m_allEmp[i]->getSal() < m_allEmp[j]->getSal()) or (m_allEmp[i]->getSal() == m_allEmp[j]->getSal()))
            return 1;
        else 
            return 0;
    }
    
    
};

#endif /* CDATASORTSALARY_H */
