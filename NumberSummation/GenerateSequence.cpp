/*
    Implementation for generating sequence (1 2 4 8 16...) for given number of terms.
*/

#include <iostream>
using namespace std;

void GenerateSequence()
{
    int term, total_terms;  char conti;
    do
    {
        /*Initializing the term to 1.*/
        term = 1;
        /*Read the total terms in sequence to be generated.*/
        cout << "\nEnter the total number of terms in sequence to be generated: ";
        cin >> total_terms;
        /*Check if the number of terms in sequence is not les than 1*/
        if (total_terms < 1)
        {
            cout << "\nThe sequence cannot be generated for the total terms equal to " << total_terms << ", terms should be more than 0." << endl;
        }
        else
        {
            cout << "\nThe sequence for " << total_terms << " terms is";
            for (int count = 0; count < total_terms; count++)
            {
                cout << " " << term;    /*Display the value of term.*/
                term = term + term;     /*Calculate next term in sequence by adding the term to itself.*/
            }
        }
        cout << "\nDo you want to generate another sequence for different number of terms? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' || conti == 'y');
}