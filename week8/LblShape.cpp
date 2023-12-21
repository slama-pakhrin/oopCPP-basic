/***********************************************************************

Workshop 8 part 1

Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: July 20

***********************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "LblShape.h"

using namespace std;
namespace sdds
{
    LblShape::LblShape()
    {
        if (m_label != nullptr)
        {
            delete[] m_label;

        }
        m_label = nullptr;
    }
    LblShape::LblShape( const char* label)
    {
        if (m_label != nullptr)
        {
            delete[] m_label;
        }
        m_label = new char[strlen(label)+1]; 
        strcpy(m_label, label);
    }
    char* LblShape::label()const
    {
        return m_label;
    }
    LblShape::~LblShape()
    {
            delete[] m_label;
            m_label = nullptr;      
    }
    void  LblShape::getSpecs(std::istream& is)
    {
        char str[100]{};
        is.getline(str,100,',');
        delete[] m_label;
        m_label = nullptr;
        m_label = new char[strlen(str)+1];
        strcpy(m_label, str);       
    }
}