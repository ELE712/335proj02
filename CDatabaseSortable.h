/******************************************************
 ** FILE: CDatabaseSortable
 **
 ** ABSTRACT:
 ** Sortable database class, links cdatabase with sortablevector
 **
 **
 ** AUTHOR: Ezekiel Zandbergen, Cynthia Obia
 **
 ** CREATION DATE: 2-23-16
 **
 *******************************************************/

#ifndef CDATABASESORTABLE_H
#define CDATABASESORTABLE_H
#include "CDatabase.h"
#include "SortableVector.h"

class CDatabaseSortable: public CDatabase, public SortableVector{
public:
    CDatabaseSortable(vector<CEmployee*> data): CDatabase(data){}
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
