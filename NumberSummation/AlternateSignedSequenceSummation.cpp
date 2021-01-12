/*
    Implementation for summation of alternately signed sequence (1 - 3 + 5 - 7...) for given number of terms.
*/

/*
    Note: Trying to explain the logic behind achieving this, as it was difficult at the beginning to come with 
    this solution. Here we need to sum the sequence of odd numbers with alternate signs. So, we need to generate
    next number which is an odd number, this is achieved by adding 2 to the 'next_term' as it is already initialized
    to 1. Now, you can see that the first term '1' has positive sign, second term '-3' has negative sign and third
    term '5' again has positive sign, we can conclude that the all the odd numbers in even places have negative 
    sign (like 3, 7, 11 and so on), which we need to subtract and all the odd numbers in odd places have positive
    sign (like 1, 5, 9 and so on). So, we need to subtract the odd numbers which are at even places from the 'sum' 
    and add odd numbers which are at odd places to the 'sum'. This we achieve by using 'count' and looping it till 
    the count reaches the total number of terms (total_terms) entered by the user, when the count is even the number
    at the even place is subtracted from 'sum' and when the count is odd, the number at the odd place is added to 
    the 'sum'.
*/

#include <iostream>
using namespace std;

void AlternateSignedSequenceSummation()
{
    int total_terms, sum, next_term, sign;  char conti;

    do
    {
        cout << "\nEnter the total number of terms in the sequence to be summed: ";
        cin >> total_terms;

        sum = 0;    next_term = 1;
        if (total_terms <= 0)
        {
            cout << "\nThe sequence for number of term equal to " << total_terms << " cannot be summed." << endl;
        }
        else
        {            
            for (int count = 1; count <= total_terms; count++)
            {
                if (count % 2 == 0)     /*If the count is even, substract the next term from sum.*/
                {
                    sum = sum - next_term;
                }
                else                    /*If the count is odd, add the next term to sum.*/
                {
                    sum = sum + next_term;
                }
                next_term = next_term + 2;
            }
            cout << "\nThe sum for sequence of odd number terms with alternate sign is " << sum << endl;
        }
        cout << "\nDo you want to sum sequence (1 - 3 + 5 - 7 + ...) with different number of terms? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' || conti == 'y');
}