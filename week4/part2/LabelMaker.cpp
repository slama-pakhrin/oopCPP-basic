/***********************************************************************
Name: Salon Lama Pakhrin
ID : 160535217
Section: ZBB
email: slama-pakhrin@myseneca.ca
Date: Jun 9
***********************************************************************/

#include <iostream>
#include "Label.h"
#include "LabelMaker.h"

using namespace std;
namespace sdds
{
        LabelMaker::LabelMaker(int noOfLabels)
        {
            m_noOfLabels = noOfLabels;
            labels = new Label[noOfLabels];
        }
        void LabelMaker::readLabels()
        {
            cout << "Enter " << m_noOfLabels << " labels:" << endl;
            for (int i = 0; i < m_noOfLabels; i++)
            {
                cout << "Enter label number " << i+1 << endl;
                cout << "> ";
                labels[i].readLabel();
            }
        }
        void LabelMaker::printLabels()
        {
            for (int i = 0; i < m_noOfLabels; i++)
            {
                if (i != m_noOfLabels-1)
                {
                    labels[i].printLabel();
                    cout << endl;
                }
                else
                {
                    labels[i].printLabel() << endl;
                }
            }
        }
        LabelMaker::~LabelMaker()
        {
           delete[] labels;          
        }
}