
/***********************************************************************
Workshop 5 part 1

Name: Salon Lama Pakhrin
ID : 160535217
Section: ZBB
email: slama-pakhrin@myseneca.ca
Date: Jun 14
***********************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Account.h"

using namespace std;
namespace sdds {
   void Account::setEmpty() {
      m_number = -1;
      m_balance = 0.0;
   }
   // New account
   Account::Account() {  
      m_number = 0;
      m_balance = 0.0;
   }
   Account::Account(int number, double balance ) {
      setEmpty();
      if (number >= 10000 && number <= 99999
         && balance > 0) {
         m_number = number;
         m_balance = balance;
      }
   }
   std::ostream& Account::display() const{
      if (*this) {  
         cout << " ";
         cout << m_number;
         cout << " | ";
         cout.width(12);
         cout.precision(2);
         cout.setf(ios::right);
         cout.setf(ios::fixed);
         cout << m_balance;
         cout.unsetf(ios::right);
         cout << " ";
      }
      else if(~*this) {
         cout << "  NEW  |         0.00 ";
      }
      else {
         cout << "  BAD  |    ACCOUNT   ";
      }
      return cout;
    }

     Account::operator bool()const
    {
        return m_number >= 10000 && m_number <= 99999 && m_balance >= 0;
    }
     
     Account::operator int()const
     {
        return m_number;
     }

     Account::operator double()const
     {
        return m_balance;
     }

     bool Account::operator~()const
     {
        return m_number == 0;
     }

     Account& Account::operator=(int value)
     {
         if (value < 10000 && value > 99999)
         {
             this->m_number = -1;
             this->m_balance = 0;
         }

         if (value >= 10000 && value <= 99999 && ~*this)
         {
             this->m_number = value;
         }

         return *this;
     }

     Account& Account::operator=(Account& A)
     {
         if (~*this && A)
         {
             m_number += A.m_number;
             A.m_number = 0;
             m_balance += A.m_balance;
             A.m_balance = 0;          
         }
         return A;
     }

     Account& Account::operator+=(double value)
     {
         if (~*this || value >= 0)
         {
             m_balance = m_balance + value;
         }
         return *this;
     }

     Account& Account::operator-=(double value)
     {
         if (*this && this->m_balance > value && value >= 0)
         {
             m_balance -= value;
         }
         return *this;
     }

     Account& Account::operator<<(Account& right)
     {
         if (*this && right && this->m_number != right.m_number)
         {
             m_balance = right.m_balance + m_balance;
             right.m_balance = 0;
         }
         return *this;
     }

     Account& Account::operator>>(Account& right)
     {
         if (*this  && right )
         {
             right.m_balance = right.m_balance + m_balance;
             m_balance = 0;
         }
         return right;
     }

     double operator+(const Account& left, const Account& right)
     {
         double value = 0;
         if (left && right)
         {
             value = left.operator double() + right.operator double();
         }
         return value;
     }
     
     double& operator+=(double& left, const Account& right)
     {
         left += right.operator double();
         return left;
     }
}