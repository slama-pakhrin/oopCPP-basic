/***********************************************************************
Workshop 5 part 2

Name: Salon Lama Pakhrin
ID : 160535217
Section: ZBB
email: slama-pakhrin@myseneca.ca
Date: Jun 16
***********************************************************************/

#ifndef SDDS_MARK_H_
#define SDDS_MARK_H_

#include <iostream>

namespace sdds
{
    class Mark
    {
        int m_grade;
        double m_scale{};
        char m_symbol{};
        bool valid;

    public: 
        void setEmpty();
        Mark();
        Mark(int);
        bool  isValid();
        operator int();
        operator double();
        operator char();
        Mark& operator+=(int);
        Mark& operator=(int);
        ~Mark();
        
    };
    int operator+=(int& ,Mark&);
}
#endif