/***********************************************************************
Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: July 12
***********************************************************************/

#ifndef SDDS_MOTORVEHICLE_H
#define SDDS_MOTORVEHICLE_H

#include <iostream>
namespace sdds
{
    class MotorVehicle
    {
         char m_license[9]{};
         char m_address[64]{};
        int m_year{};

    public:
        MotorVehicle();
        MotorVehicle(const char licensePlate[], int year);
        void moveTo(const char* address);
        std::ostream& write(std::ostream& os)const;
        std::istream& read(std::istream& in);

    };

    std::ostream& operator<<(std::ostream& ostr, const MotorVehicle&);
    std::istream& operator>>(std::istream& istr, MotorVehicle& );
}

#endif // !SDDS_MOTORVEHICLE_H