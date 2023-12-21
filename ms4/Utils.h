/***********************************************************************
// OOP244 Utils Module
// File	Utils.h
// Version 
// Date	
// Author	
// Description
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
// 
/////////////////////////////////////////////////////////////////

Name: Salon Lama Pakhrin
ID : 160535217
Section: ZBB
email: slama-pakhrin@myseneca.ca
Date: July 27

***********************************************************************/
#ifndef SDDS_UTILS_H__
#define SDDS_UTILS_H__
#include <iostream>

namespace sdds {
    // Gets an integer as input and validates the range as well. It prints a message if the range isn't valid and prompts again
    int getIntegerInput(int minRange, int maxRange);
}

#endif