/***********************************************************************
Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: July 12
***********************************************************************/

#include <iostream>
#include "MotorVehicle.h"
#include "cstring.h"
using namespace std;
namespace sdds
{
    MotorVehicle::MotorVehicle()
    {

    }

    MotorVehicle::MotorVehicle(const char licensePlate[], int year)
    {
        strCpy(m_license, licensePlate);
        m_year = year;
        strCpy(m_address, "Factory");
      
    }
    void MotorVehicle::moveTo(const char* address)
    {
        cout.setf(ios::right);
        cout << "|";
        cout.width(8);
        cout << m_license << "|";
        cout << " |";
        cout.width(20);
        cout << m_address;
        cout << " ---> ";
        cout.unsetf(ios::right);
        cout.setf(ios::left);
        cout.width(20);
        cout << address;
        cout << "|" << endl;
        if (strCmp(m_address, address))
        {
            strCpy(m_address, address);
        }
        cout.unsetf(ios::left);
   
    }
    std::ostream& MotorVehicle::write(std::ostream& os)const
    {
        os << "| " << m_year << " | " << m_license << " | " << m_address;

        return os;
    }
    std::istream& MotorVehicle::read(std::istream& in)
    {
            cout << "Built year: ";
            in >> m_year;
            cout << "License plate: ";
            in >> m_license;
            cout << "Current location: ";
            in >> m_address;
            return in;

    }
    std::ostream& operator<<(std::ostream& ostr, const MotorVehicle& MV)
    {
        return MV.write(ostr);
    }
    std::istream& operator>>(std::istream& istr, MotorVehicle& MV)
    {
        return MV.read(istr);
    }
}