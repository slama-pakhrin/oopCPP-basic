/***********************************************************************

Workshop 8 part 1

Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: July 20

***********************************************************************/
#ifndef SDDS_RECTANGLE_H
#define SDDS_RECTANGLE_H

#include <iostream>
#include "LblShape.h"
namespace sdds
{
    class Rectangle : public LblShape
    {
        int m_width;
        int m_height;

    public:
        Rectangle();
        Rectangle(const char* label, int width, int height);
        void setEmpty();
        void getSpecs(std::istream&);
        void draw(std::ostream&)const;
    };

}
#endif // !SDDS_RECTANGLE_H