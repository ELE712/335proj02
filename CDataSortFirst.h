/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   CDataSortFirst.h
 * Author: zekezandbergen
 *
 * Created on February 23, 2016, 9:12 PM
 */

#ifndef CDATASORTFIRST_H
#define CDATASORTFIRST_H
#include "CDatabaseSortable.h"
#include "SortableVector.h"

class CDataSortFirst: public CDatabaseSortable{    
public:
    //CDataSortFirst(CDatabaseSortable data);
    
    virtual bool smaller(int i,int j) const{
        if ((m_allEmp[i]->getFirstName() < m_allEmp[j]->getFirstName()) or (m_allEmp[i]->getFirstName() == m_allEmp[j]->getFirstName()))
            return 1;
        else
            return 0;
    }
    
};

#endif /* CDATASORTFIRST_H */
