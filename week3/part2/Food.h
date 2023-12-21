/***********************************************************************
Workshop 3 Part 2
Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: May 31
***********************************************************************/

#ifndef SDDS_FOOD_H_
#define SDDS_FOOD_H_
namespace sdds
{
    class Food
    {
        char m_foodName[30];
        int m_calNum;
        int  m_timeOfConsumption;
      

    public :
        void setName(const char* name);
        void setEmpty();
        void set(const char* name, int num, int time);
        bool isValid()const;
        int time()const;
        int calNum()const;
        void display()const;

    };
}
#endif