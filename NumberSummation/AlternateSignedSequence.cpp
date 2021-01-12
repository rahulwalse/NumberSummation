/*
    Implmentation for generating alternate signed sequence (1 -1 1 -1 1 -1...) for given number of terms.
*/

#include <iostream>
using namespace std;

void AlternateSignedSequence()
{
    int total_terms, number, sequence;  char conti;

    do
    {
        /*Initialize the sequence to 1 as we just need to alter the sign.*/
        sequence = 1;
        /*Read the total number of terms to be generated with alternate sign.*/
        cout << "\nEnter the total number of terms in sequence to be generated: ";
        cin >> total_terms;
        /*The total term should have atleast one term.*/
        if (total_terms < 1)
        {
            cout << "\nThe sequence cannot be generated for the total terms equal to " << total_terms << ", terms should be more than 0." << endl;
        }
        else
        {
            for (int count = 1; count <= total_terms; count++)
            {
                cout << " " << sequence;
                /*Change the sign of the sequence, looping this will give you alternating signs for the number in sequence.*/
                sequence = -sequence;
            }
        }
        cout << "\nDo you want to generate this sequence again with different number of terms? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' || conti == 'y');
}