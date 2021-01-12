/*
    Implementation for summing the various sequences upto n terms, where n is the value
    read from the user.
*/

#include <iostream>
#include "summationf.h"
using namespace std;
const int FIRSTOPTION = 1, LASTOPTION = 4;

void SummationOfNumberSequences()
{
    /*Declaring the required variables.*/
    int choice; char conti;

    do
    {
        //Displaying the user with different sequences to calculate the sum for it.
        cout << "\nChoose from the following options of sequences to get sum for\n1. s = 1 + 2 + 3 + ...\n2. s = 1 + 3 + 5 + ...\n3. s = 2 + 4 + 6 + ...";
        cout << "\n4. s = 1 + 1/2 + 1/3 + ...\nEnter your choice: ";
        cin >> choice;

        if (choice < FIRSTOPTION || choice > LASTOPTION)   //Check if the options chosen by user is valid.
        {
            cout << "\nThe choice you entered is invalid. Exiting the program.";
        }
        else
        {
            switch (choice)
            {
            case 1: SequenceOne();
                    break;

            case 2: SequenceTwo();
                    break;

            case 3: SequenceThree();
                    break;

            case 4: SequenceFour();
                    break;
            }
        }
        cout << "\nDo you want to calculate sum for different sequence with new number of terms in it? (Y/N)";
        cin >> conti;
    } while (conti == 'Y' || conti == 'y');
}