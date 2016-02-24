/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: zekezandbergen
 *
 * Created on February 23, 2016, 8:53 PM
 */

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

/*
 * 
 */
int main(int argc, char** argv) {
  Employee e1("John", "Smith1", 10000, 2011);
  Employee e2("John", "Smith2", 10000, 2011);
  Employee e3("John", "Smith3", 10000, 2011);
  Manager m1("Tom", "Cruise", 40000, 2000, "Sales");
  Employee e4("John", "Doe1", 10000, 2011);
  Employee e5("John", "Doe2", 10000, 2011);
  Employee e6("John", "Doe3", 10000, 2011);
  Manager m2("Alice", "Cooper", 45000, 2000, "Human Resources");
  
  CDatabaseSortable cds;
  cds.addRecord(&e1);
  cds.addRecord(&e2);
  cds.addRecord(&e3);
  cds.addRecord(&m1);
  cds.addRecord(&e4);
  cds.addRecord(&e5);
  cds.addRecord(&e6);
  cds.addRecord(&m2);
  
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
  
  return 0;
}

