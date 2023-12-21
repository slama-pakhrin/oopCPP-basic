/***********************************************************************
Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: July 12
***********************************************************************/

#ifndef SDDS_TRUCK_H
#define SDDS_TRUCK_H

#include <iostream>
#include "MotorVehicle.h"
namespace sdds
{
    class Truck : public MotorVehicle
    {
        double m_capacity_in_kg{};
        double m_current_load_in_kg{};

    public:
        Truck(const char licensePlate[], int year, double capacity, const char address[]);
        bool addCargo(double cargo);
        bool unloadCargo();
        std::ostream& write(std::ostream& os);
        std::istream& read(std::istream& in);

    };

    std::ostream& operator<<(std::ostream& ostr, Truck&); // add const if able
    std::istream& operator>>(std::istream& istr, Truck&);
}


#endif // SDDS_TRUCK_H