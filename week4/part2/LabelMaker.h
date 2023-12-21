/***********************************************************************
Name: Salon Lama Pakhrin
ID : 160535217
Section: ZBB
email: slama-pakhrin@myseneca.ca
Date: Jun 9
***********************************************************************/

#ifndef SDDS_LABELMAKER_H_
#define SDDS_LABELMAKER_H_
namespace sdds
{
    class LabelMaker
    {
        int m_noOfLabels;
        Label* labels;
    public:
        LabelMaker(int noOfLabels);
        void readLabels();
        void printLabels();
        ~LabelMaker();
};
}
#endif