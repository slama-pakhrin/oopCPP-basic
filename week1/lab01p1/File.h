/***********************************************************************
Name: Salon Lama Pakhrin\
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: May 15
***********************************************************************/
#ifndef SDDS_FILE_H
#define SDDS_FILE_H

#include "ShoppingRec.h"

namespace sdds
{


bool openFileForRead();
bool openFileForOverwrite();
void closeFile();
bool freadShoppingRec(ShoppingRec* rec);
void fwriteShoppintRec(const ShoppingRec* rec);

}

#endif