/***********************************************************************
Workshop 5 part 1

Name: Salon Lama Pakhrin
ID : 160535217
Section: ZBB
email: slama-pakhrin@myseneca.ca
Date: Jun 14
***********************************************************************/

#ifndef SDDS_ACCOUNT_H_
#define SDDS_ACCOUNT_H_
#include <iostream>

namespace sdds {
   class Account {
      int m_number;
      double m_balance; 
      void setEmpty();
   public:
      Account();
      Account(int number, double balance);
      std::ostream& display()const;
      operator bool()const;
      operator int()const;
      operator double()const;
      bool operator~()const;
      Account& operator=(Account&);
      Account& operator=(int value);
      Account& operator+=(double value);
      Account& operator-=(double value);
      Account& operator<<(Account&);
      Account& operator>>(Account&);
   }; 
   double operator+(const Account& left, const Account& right);
   double& operator+=(double& left, const Account& right);
}

#endif // SDDS_ACCOUNT_H_ 