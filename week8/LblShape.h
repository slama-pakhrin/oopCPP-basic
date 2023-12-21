/***********************************************************************

Workshop 8 part 1

Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: July 20

***********************************************************************/
#ifndef SDDS_LBLSHAPE_H
#define SDDS_LBLSHAPE_H

#include <iostream>
#include "Shape.h"

namespace sdds
{
    class LblShape :
        public Shape
    {
        char* m_label{};

    protected:
       char* label()const;
    public:
        LblShape();
        LblShape(const char* label);
       virtual ~LblShape();
        LblShape(const LblShape&) = delete;
        LblShape& operator=(const LblShape&) = delete;
        void getSpecs(std::istream&);
    };
}
#endif
