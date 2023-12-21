/***********************************************************************
Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: July 12
***********************************************************************/

#include <iostream>
#include "MotorVehicle.h"
#include "Truck.h"
#include "cstring.h"

using namespace std;
namespace sdds
{
    Truck::Truck(const char licensePlate[], int year, double capacity, const char address[]) : MotorVehicle(licensePlate, year)
    {
        m_current_load_in_kg = 0;
        m_capacity_in_kg = capacity;
        moveTo(address);

    }
    bool  Truck::addCargo(double cargo)
    {
        double old{};
        old = m_current_load_in_kg;
        if (m_current_load_in_kg + cargo <= m_capacity_in_kg)
        {
            m_current_load_in_kg += cargo;
        }
        else
        {
            m_current_load_in_kg = m_capacity_in_kg;
        }


        return old != m_current_load_in_kg;
    }
    bool  Truck::unloadCargo()
    {
        bool ret = false;
        if (m_current_load_in_kg != 0)
        {
            ret = true;
        }
       m_current_load_in_kg = 0;

        return ret;
    }
    std::ostream& Truck::write(std::ostream& os)
    {
        MotorVehicle::write(os);
        os << " | " << m_current_load_in_kg << "/" << m_capacity_in_kg;

        return os;

    }
    std::istream& Truck::read(std::istream& in)
    {
        MotorVehicle::read(in);
        cout << "Capacity: ";
        in >> m_capacity_in_kg;
        cout << "Cargo: ";
        in >> m_current_load_in_kg;

        return in;
    }
    std::ostream& operator<<(std::ostream& ostr, Truck& T)
    {
        return T.write(ostr);
    }
    std::istream& operator>>(std::istream& istr, Truck& T)
    {
        return T.read(istr);
    }
}