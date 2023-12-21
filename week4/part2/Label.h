/***********************************************************************
Name: Salon Lama Pakhrin
ID : 160535217
Section: ZBB
email: slama-pakhrin@myseneca.ca
Date: Jun 9
***********************************************************************/

#ifndef SDDS_LABEL_H_
#define SDDS_LABEL_H_
#include <iostream>

namespace sdds
{
    class Label
    {
        char* m_frame;
        char* m_content;
        int m_width;
        void setToDefault();
        void setName(const char* str);
        void setContent(const char* content);
        int Width();
        bool isEmpty()const;
    public: 
        Label();
        Label(const char* frameArg);
        Label(const char* frameArg, const char* content);
        ~Label();
        void readLabel();
        std::ostream& printLabel()const;
    };
}
#endif