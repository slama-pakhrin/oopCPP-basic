/***********************************************************************
Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: May 24
***********************************************************************/

#include <iostream>
#include "cstring.h" 
#include "Employee.h"
#include "File.h"
using namespace std;
namespace sdds {

   int noOfEmployees;
   Employee* employees;


   void sort() {
      int i, j;
      Employee temp;
      for (i = noOfEmployees - 1; i > 0; i--) {
         for (j = 0; j < i; j++) {
            if (employees[j].m_empNo > employees[j + 1].m_empNo) {
               temp = employees[j];
               employees[j] = employees[j + 1];
               employees[j + 1] = temp;
            }
         }
      }
   }
  

   bool load(Employee& employ) {
      bool ok = false;
      char name[128];
      int number = 0;
      double salary = 0;


          if (read(number) && read(salary)  && read(name))
          {
              employ.m_empNo = number;
              employ.m_salary = salary;
              employ.m_name = new char[strLen(name) + 1];
              strCpy(employ.m_name, name);
              ok = true;
             
          }         
      return ok;
   }

   bool load() {
      bool ok = false;
      int count = 0;
      if (openFile(DATAFILE)) {   
          noOfEmployees = noOfRecords();
           employees = new Employee[noOfEmployees];
       
              for (int i = 0; i < noOfEmployees; i++)
              {
                  load(employees[i]);
                  count++;
 
              }
              if (count != noOfEmployees)
              {
                  cout << "Error: incorrect number of records read; the data is possibly corrupted" << endl;
              }
              else
              {
                  ok = true;
              }
          closeFile();
      }
      else {
         cout << "Could not open data file: " << DATAFILE<< endl;
      }
      return ok;
   }

 
   void display(const Employee& employee)
   {
      
       cout << employee.m_empNo << ": " << employee.m_name << ", " << employee.m_salary << endl;

   }

   void display()
   {
       cout << "Employee Salary report, sorted by employee number" << endl;
       cout << "no- Empno, Name, Salary" << endl;
       cout << "------------------------------------------------" << endl;
       sort();
       for (int  i = 0; i < noOfEmployees; i++)
       {
           cout << i+1 <<"- ";
           display(employees[i]); 

       }

   }

  
   void deallocateMemory()
   {
  
  for (int i = 0; i < noOfEmployees; i++)
       {
           delete[] employees[i].m_name;

       }
       delete[] employees;
       employees = nullptr;
     
   }


}