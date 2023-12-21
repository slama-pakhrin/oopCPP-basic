/***********************************************************************
Name: Salon Lama Pakhrin
ID : 160535217
email: slama-pakhrin@myseneca.ca
Date: May 26
***********************************************************************/

#ifndef SDDS_POPULATION_H_
#define SDDS_POPULATION_H_
namespace sdds {

    struct Population
    {
        char* postal_code;
        int population;

    };
    void sort();
    bool load(Population&);
    bool load(const char *filename);
    void display(const Population&);
    void display();
    void deallocateMemory();
}
#endif // SDDS_POPULATION_H_