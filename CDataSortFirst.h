/******************************************************
 ** FILE: CDataSortFirst.h
 **
 ** ABSTRACT:
 ** Sort database by first name
 **
 **
 ** AUTHOR: Ezekiel Zandbergen, Cynthia Obia
 **
 ** CREATION DATE: 2-23-16
 **
 *******************************************************/

#ifndef CDATASORTFIRST_H
#define CDATASORTFIRST_H
#include "CDatabaseSortable.h"
#include <vector>
using namespace std;

class CDataSortFirst: public CDatabaseSortable{
public:
    CDataSortFirst(vector<CEmployee*> data): CDatabaseSortable(data){}
    virtual bool smaller(int i,int j) const{
            if (m_allEmp[i]->getFirstName()<m_allEmp[j]->getFirstName())
                return 1;
            else
                return 0;
        }
};


#endif /* CDATASORTFIRST_H */

