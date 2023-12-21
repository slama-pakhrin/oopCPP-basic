/***********************************************************************
Name: Salon Lama Pakhrin\
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: May 15
***********************************************************************/
#ifndef SDDS_SHOPPINGLIST_H
#define SDDS_SHOPPINGLIST_H

namespace sdds
{
bool loadList();
void displayList();
void removeBoughtItems();
void removeItem(int index);
bool saveList();
void clearList();
void toggleBought();
void addItemToList();
void removeItemfromList();
bool listIsEmpty();


}

#endif


