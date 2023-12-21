/***********************************************************************
Name: Salon Lama Pakhrin\
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: May 15
***********************************************************************/
#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H

namespace sdds
{
void flushkeys();
bool ValidYesResponse(char ch);
bool yes();
void readCstr(char cstr[], int len);
int readInt(int min, int max);

}

#endif