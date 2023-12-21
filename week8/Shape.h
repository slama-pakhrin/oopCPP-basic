/***********************************************************************

Workshop 8 part 1

Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: July 20

***********************************************************************/
#ifndef SDDS_SHAPE_H
#define SDDS_SHAPE_H
#include <iostream>
namespace sdds
{
    class Shape
    {
    public:
        virtual void getSpecs(std::istream&) = 0;
        virtual void draw(std::ostream&)const = 0;
        virtual ~Shape() = 0;

    };
    std::istream& operator>>(std::istream&, Shape&);
    std::ostream& operator<<(std::ostream&, const Shape&);

}
#endif // !SDDS_SHAPE_H