/* Citation and Sources...
Final Project Milestone 2
Module: LibApp
Filename: LibApp.cpp
Version 1.0
Author	John Doe
Revision History
-----------------------------------------------------------
Date      Reason
2023/07/16  
-----------------------------------------------------------
I have done all the coding by myself and only copied the code 
that my professor provided to complete my workshops and assignments.
-----------------------------------------------------------

Name: Salon Lama Pakhrin
ID : 160535217
Section: ZBB
email: slama-pakhrin@myseneca.ca
Date: July 16

****************************************************************/

#ifndef SDDS_LIBAPP_H
#define SDDS_LIBAPP_H

#include <iostream>
#include "Menu.h"

namespace sdds {
    class LibApp {
    private:
        bool m_changed;
        Menu m_mainMenu;
        Menu m_exitMenu;

        // Instantiates a menu and initializes it with the message argument
        bool confirm(const char* message);

        // Simple private functions
        void load();
        void save();
        void search();
        void returnPub();

        // Methods with confirmation
        void newPublication();
        void removePublication();
        void checkOutPub();

    public:
        LibApp();

        // Displays the main menu and based on the user's selection calls the corresponding private method and repeats the above until the user chooses to exit.
        void run();
    };
}

#endif