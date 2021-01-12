/*
    Implementation for finding Harmonic mean: H= n/[(1/a1)+(1/a2)+...+(1/ai)]
*/

#include <iostream>
using namespace std;

void HarmonicMean()
{
    /*
        Declaring the required variables: n to get value of n; number to get value of ai;
        term to calculate 1/ai; sum to store the sum of the terms.
    */
    float n, number, term, sum, count;  char conti;

    do
    {
        /*Initializing the value of sum to zero.*/
        sum = 0;
        /*Read the value of n from user.*/
        cout << "\nEnter non-negative value for n: ";
        cin >> n;
        /*If value of n is 0, Harmonic Mean cannot be calculated.*/
        if (n == 0 or n < 0)
        {
            cout << "\nCannot calculate Harmonic Mean for n=" << n << ". n should have non-negative value greater than 0." << endl;
        }
        else
        {
            /*Until the count is less than or equal to n, calculate term and sum.*/
            for (count = 1; count <= n; count++)
            {
                cout << "\nEnter the value of a" << count << ": ";
                cin >> number;
                /*Calculate 1/ai.*/
                term = 1 / number;

                if (count == 1)
                {
                    sum = term;
                }
                else
                {
                    sum = sum + term;
                }
            }
            /*Displaying the value of Harmonic Mean by dividing n by sum.*/
            cout << "\nThe Harmonic Mean H= n/[(1/a1)+(1/a2)+...+(1/ai)] for n=" << n << " is: " << n / sum << endl;
        }
        cout << "\nDo you want to calculate Harmonic Mean for another value of n? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' || conti == 'y');
}