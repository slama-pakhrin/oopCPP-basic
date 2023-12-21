/***********************************************************************

Workshop 8 part 1

Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: July 20

***********************************************************************/
#ifndef SDDS_LINE_H
#define SDDS_LINE_H
#include <iostream>
#include "LblShape.h"
namespace sdds
{
    class Line : public LblShape
    {
        int m_length{};
    public:
        Line();
        Line(const char* str, int length);
        void getSpecs(std::istream&);
        void draw(std::ostream&)const;

    };
}
#endif // !SDDS_LINE_H