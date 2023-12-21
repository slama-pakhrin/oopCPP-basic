/***********************************************************************
Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: May 31
***********************************************************************/

#ifndef SDDS_ITEM_H_
#define SDDS_ITEM_H_
namespace sdds {
   class Item {
      char m_itemName[21];
      double m_price;
      bool m_taxed;
      void setName(const char* name);
   public:
      void setEmpty();
      void set(const char* name, double price, bool taxed);
      double price()const;
      double tax()const;
      bool isValid()const;
      void display()const;
   };
}

#endif // !SDDS_SUBJECT_H