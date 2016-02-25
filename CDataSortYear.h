/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   CDataSortYear.h
 * Author: zekezandbergen
 *
 * Created on February 23, 2016, 9:14 PM
 */

#ifndef CDATASORTYEAR_H
#define CDATASORTYEAR_H
#include "CDatabaseSortable.h"

class CDataSortYear: public CDatabaseSortable{
public:
    CDataSortYear(vector<CEmployee*> data): CDatabaseSortable(data){}
    virtual bool smaller(int i,int j) const{
        if ((m_allEmp[i]->getYear() < m_allEmp[j]->getYear()) or (m_allEmp[i]->getYear() == m_allEmp[j]->getYear()))
            return 1;
        else 
            return 0;
    }
    
};

#endif /* CDATASORTYEAR_H */
