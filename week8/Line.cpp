/***********************************************************************

Workshop 8 part 1

Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: July 20

***********************************************************************/
#include <iostream>
#include "Shape.h"
#include "Line.h"
using namespace std;
namespace sdds
{
    Line::Line() : LblShape()
    {
        m_length = 0;
    }
    Line::Line(const char* str, int length) : LblShape(str)
    {
        m_length = length;
    }
    void Line::getSpecs(std::istream& is)
    {
        LblShape::getSpecs(is);
        is >> m_length;
        is.ignore(1000, '\n');
    }
    void Line::draw(std::ostream& os)const
    {
        if (m_length > 0 && label() != nullptr)
        {
            os << label() << endl;
            for (int i = 0; i < m_length; i++)
            {
                os << "=";
            }
        }
    }
}