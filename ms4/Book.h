/***********************************************************************

Name: Salon Lama Pakhrin
ID : 160535217
Section: ZBB
email: slama-pakhrin@myseneca.ca
Date: July 27

***********************************************************************/

#ifndef SDDS_BOOK_H
#define SDDS_BOOK_H

#include "Publication.h"

namespace sdds {
    class Book : public Publication {
    private:
        char* authorName;
    public:
        Book();
        ~Book();

        // Copying is allowed
        Book(const Book& book);
        Book& operator=(const Book& book);

        // Sets book to empty state
        void setBookEmpty();

        // Returns the character 'P' to identify this object as a "Publication object"
        char type() const;

        // Write into an ostream object
        std::ostream& write(std::ostream& os) const;

        // Read from an istream object.
        std::istream& read(std::istream& is);

        // Sets the membership attribute to either zero or a five-digit integer.
        virtual void set(int member_id);

        // Overloads of this method will return if the Streamable object is in a valid state or not
        operator bool() const;
    };
}

#endif // SDDS_BOOK_H