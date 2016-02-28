/******************************************************
 ** FILE: CDataSortLast.h
 **
 ** ABSTRACT:
 ** Sort database by last name
 **
 **
 ** AUTHOR: Ezekiel Zandbergen, Cynthia Obia
 **
 ** CREATION DATE: 2-23-16
 **
 *******************************************************/

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
