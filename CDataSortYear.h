/******************************************************
 ** FILE: CDataSortYear
 **
 ** ABSTRACT:
 ** Sort database by hire year
 **
 **
 ** AUTHOR: Ezekiel Zandbergen, Cynthia Obia
 **
 ** CREATION DATE: 2-23-16
 **
 *******************************************************/

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
