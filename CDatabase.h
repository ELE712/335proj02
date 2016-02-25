/******************************************************
 ** FILE: CDatabase.h
 **
 ** ABSTRACT:
 ** Design and implementation of CDatabase holding records of CEmployees
 **
 **
 ** AUTHOR: Ezekiel Zandbergen, Matthew Eaton
 **
 ** CREATION DATE: 1-27-16
 **
 *******************************************************/

#ifndef CDATABASE_H
#define CDATABASE_H
#include <vector>
#include <string>
        
#include "CManager.h"

using namespace std;
class CDatabase{
protected:
    vector<CEmployee*> m_allEmp; //to hold all employees
public:
    CDatabase() {}
    CDatabase(vector<CEmployee*> emp_vec){ 
        //constructs vector from referenced vector
        m_allEmp = emp_vec;
    }
    CDatabase(const CDatabase& data){
        //copy constructor
        m_allEmp = data.m_allEmp;
    }
    virtual ~CDatabase() {
        //destructor
    }
    CDatabase& operator=(CDatabase data) {
        //assignment operator
        swap(m_allEmp, data.m_allEmp);
        return *this;
    }
    void AddRecord(CEmployee* emp) {
        //adds employee to vector
        m_allEmp.push_back(emp);
    }
    vector<CEmployee*> GetEmps(){
        return m_allEmp;
    }
    void DisplayRecords() {
        //display all managers and employees in database
        for (CEmployee* i : m_allEmp)
            i->DisplayEmployee();
    }
};

#endif
