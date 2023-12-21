/***********************************************************************

Workshop 8 part 1

Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: July 20

***********************************************************************/
#include <iostream>
#include "Shape.h"
namespace sdds
{
    Shape::~Shape()
    {

    }
    std::istream& operator>>(std::istream& is, Shape& S)
    {
        S.getSpecs(is);
        return is;
    }
    std::ostream& operator<<(std::ostream& os, const Shape& S)
    {
        S.draw(os);
        return os;
    }
}