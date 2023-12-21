/***********************************************************************
Workshop 3 Part 2
Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: May 31
***********************************************************************/

#ifndef SDDS_CALORIELIST_H_
#define SDDS_CALORIELIST_H_

#include "Food.h"
namespace sdds
{
    class CalorieList
    {
        Food* foods;
        int m_noOfFood;
        int m_foodAdded;
        int totalCalorie()const;
        void Title()const;
        void footer()const;
        void setEmpty();
        bool isValid()const;
    public:  
        void init(int size);
        bool add(const char* item_name, int calories, int when);
        void display()const;
        void deallocate();
    };

}

#endif