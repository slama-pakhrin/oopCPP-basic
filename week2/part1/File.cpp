/***********************************************************************
Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: May 24
***********************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include "File.h"

namespace sdds {
   FILE* fptr;
   bool openFile(const char filename[]) {
      fptr = fopen(filename, "r");
      return fptr != nullptr;
   }
   int noOfRecords() {
      int noOfRecs = 0;
      char ch;
      while (fscanf(fptr, "%c", &ch) == 1) {
         noOfRecs += (ch == '\n');
      }
      rewind(fptr);
      return noOfRecs;
   }
   void closeFile() {
      if (fptr) fclose(fptr);
   }

   bool read(char* employee_name)
   {
       bool ret = false;
      
       if(fscanf(fptr, "%[^\n]\n", employee_name) == 1)
       {
           ret = true;
       }
       return ret;
   }
   bool read(int& employee_number)
   {
       bool ret = false;
        
       if (fscanf(fptr, "%d,", &employee_number) == 1)
       {
           
           ret = true;
       }
           
   return ret;
   }
   bool read(double& employee_salary)
   {
       bool ret = false;

       if (fscanf(fptr, "%lf,", &employee_salary) == 1)
       {
           
           ret = true;
       }

       return ret;
   }
}