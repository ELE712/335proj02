/******************************************************
 ** FILE: CDataSortSalary.h
 **
 ** ABSTRACT:
 ** Sort database by salary
 **
 **
 ** AUTHOR: Ezekiel Zandbergen, Cynthia Obia
 **
 ** CREATION DATE: 2-23-16
 **
 *******************************************************/

#ifndef CDATASORTSALARY_H
#define CDATASORTSALARY_H
#include "CDatabaseSortable.h"

class CDataSortSalary: public CDatabaseSortable{
public:
    CDataSortSalary(vector<CEmployee*> data): CDatabaseSortable(data){}
    virtual bool smaller(int i,int j) const{
        if ((m_allEmp[i]->getSal() < m_allEmp[j]->getSal()) or (m_allEmp[i]->getSal() == m_allEmp[j]->getSal()))
            return 1;
        else 
            return 0;
    }
};

#endif /* CDATASORTSALARY_H */
