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
#include "BubbleSortDecreasing.h"
#include "BubblesortIncreasing.h"

using namespace std;

int main(int argc, char** argv) {
  vector<CEmployee*> mv1; //used for manager vector
 

  CDatabase cds;
  cds.AddRecord(new CEmployee("John", "Smith1", 10000, 2011));
  cds.AddRecord(new CEmployee("John", "Smith2", 20000, 2012));
  cds.AddRecord(new CEmployee("John", "Smith3", 30000, 2013));
  cds.AddRecord(new CManager("Tom", "Cruise", 40000, 2000, "Sales", mv1));
  cds.AddRecord(new CEmployee("John", "Doe1", 15000, 2010));
  cds.AddRecord(new CEmployee("John", "Doe2", 25000, 2011));
  cds.AddRecord(new CEmployee("John", "Doe3", 35000, 2012));
  cds.AddRecord(new CManager("Alice", "Cooper", 45000, 2000, "Human Resources", mv1));
  
  /*
  CDataSortFirst sf(cds);
  CDataSortLast sl(cds);
  CDataSortSalary ss(cds);
  CDataSortYear sy(cds);
  
  BubbleSortIncreasing bsi;
  BubbleSortDecreasing bsd;
  
  cout << "*********************** Before Sorting" << endl;
  cds.displayRecords();
  
  cout << "*********************** After Sorting By FirstName Alphabetical" << endl;
  bsi.sort(&sf)
  cds.displayRecords();
  
  cout << "*********************** After Sorting By FirstName Reverse Alphabetical" << endl;
  bsd.sort(&sf)
  cds.displayRecords();
  
  cout << "*********************** After Sorting By LastName Alphabetical" << endl;
  bsi.sort(&sl)
  cds.displayRecords();
  
  cout << "*********************** After Sorting By LastName Reverse Alphabetical" << endl;
  bsd.sort(&sl)
  cds.displayRecords();
  
  cout << "*********************** After Sorting By Salary Increasing" << endl;
  bsi.sort(&ss)
  cds.displayRecords();
  
  cout << "*********************** After Sorting By Salary Decreasing" << endl;
  bsd.sort(&ss)
  cds.displayRecords();
  
  cout << "*********************** After Sorting By Hireyear Increasing" << endl;
  bsi.sort(&sy)
  cds.displayRecords();
  
  cout << "*********************** After Sorting By Hireyear Decreasing" << endl;
  bsd.sort(&sy)
  cds.displayRecords();
  */
  return 0;
}

