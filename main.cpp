/******************************************************
 ** FILE: main.cpp
 **
 ** ABSTRACT:
 ** main output of program
 **
 **
 ** AUTHOR: Ezekiel Zandbergen, Cynthia Obia
 **
 ** CREATION DATE: 2-23-16
 **
 *******************************************************/

#include <cstdlib>
#include <iostream>
#include <string>
#include "CDatabase.h"
#include "CDataSortFirst.h"
#include "CDataSortLast.h"
#include "CDataSortSalary.h"
#include "CDataSortYear.h"
#include "BubbleSort.h"

using namespace std;

int main(int argc, char** argv) {
  
  vector<CEmployee*> mv1; //used for manager vector
  vector<CEmployee*> all_emp;
  CDatabase d1;
  d1.AddRecord(new CEmployee("John", "Smith1", 10000, 2011));
  d1.AddRecord(new CEmployee("John", "Smith2", 20000, 2012));
  d1.AddRecord(new CEmployee("John", "Smith3", 30000, 2013));
  d1.AddRecord(new CManager("Tom", "Cruise", 40000, 2000, "Sales", mv1));
  d1.AddRecord(new CEmployee("John", "Doe1", 15000, 2010));
  d1.AddRecord(new CEmployee("John", "Doe2", 25000, 2011));
  d1.AddRecord(new CEmployee("John", "Doe3", 35000, 2012));
  d1.AddRecord(new CManager("Alice", "Cooper", 45000, 2000, "Human Resources", mv1));
  
  
  CDataSortFirst sf(d1.GetEmps());
  CDataSortLast sl(d1.GetEmps());
  CDataSortSalary ss(d1.GetEmps());
  CDataSortYear sy(d1.GetEmps());
  
  BubbleSort bs;
  
  cout << "*********************** Before Sorting" << endl;
  d1.DisplayRecords();
  
  cout << "*********************** After Sorting By FirstName Alphabetical" << endl;
  bs.sortIncreasing(&sf);
  sf.DisplayRecords();
  
  cout << "*********************** After Sorting By FirstName Reverse Alphabetical" << endl;
  bs.sortDecreasing(&sf);
  sf.DisplayRecords();
  
  cout << "*********************** After Sorting By LastName Alphabetical" << endl;
  bs.sortIncreasing(&sl);
  sl.DisplayRecords();
  
  cout << "*********************** After Sorting By LastName Reverse Alphabetical" << endl;
  bs.sortDecreasing(&sl);
  sl.DisplayRecords();
  
  cout << "*********************** After Sorting By Salary Increasing" << endl;
  bs.sortIncreasing(&ss);
  ss.DisplayRecords();
  
  cout << "*********************** After Sorting By Salary Decreasing" << endl;
  bs.sortDecreasing(&ss);
  ss.DisplayRecords();
  
  cout << "*********************** After Sorting By Hireyear Increasing" << endl;
  bs.sortIncreasing(&sy);
  sy.DisplayRecords();
  
  cout << "*********************** After Sorting By Hireyear Decreasing" << endl;
  bs.sortDecreasing(&sy);
  sy.DisplayRecords();
 
  return 0;
}

