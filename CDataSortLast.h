/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   CDataSortLast.h
 * Author: zekezandbergen
 *
 * Created on February 23, 2016, 9:13 PM
 */

#ifndef CDATASORTLAST_H
#define CDATASORTLAST_H
#include "CDatabaseSortable.h"

class CDataSortLast: public CDatabaseSortable{
public:
    CDataSortLast(vector<CEmployee*> data): CDatabaseSortable(data){}
    virtual bool smaller(int i,int j) const{
        if ((m_allEmp[i]->getLastName() < m_allEmp[j]->getLastName()) or (m_allEmp[i]->getLastName() == m_allEmp[j]->getLastName()))
            return 1;
        else 
            return 0;
    }
    
};


#endif /* CDATASORTLAST_H */
