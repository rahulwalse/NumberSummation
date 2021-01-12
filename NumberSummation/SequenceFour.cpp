/*
    Implementation for summing the sequence (s = 1 + 1/2 + 1/3 + ...) upto n, where n
    is the number provided by the user.
*/

#include <iostream>
using namespace std;

void SequenceFour()
{
    int sequence_length;    float sum, next_term, count;
    /*Read the length of sequence to be summed.*/
    cout << "\nEnter the number of terms for sequence (s = 1 + 1/2 + 1/3 + ...) to be summed: ";
    cin >> sequence_length;
    /*Initializing the sum & next_term to 1 as the first term required in the sequence begins with 1.*/
    sum = 1;    next_term = 1;
    /*Ensuring that the sequence length is greater than zero.*/
    if (sequence_length <= 0)
    {
        cout << "\nThe sequence for number of term equal to " << sequence_length << " cannot be summed." << endl;
    }
    else
    {
        /*As sum is already initialized with the first term i.e. 1, the counter count begins from second term.*/
        for (count = 2; count <= sequence_length; count++)
        {
            next_term = 1 / count;      /*Calculate the next term in sequence by dividing 1 by the current count.*/
            /*
                By adding the value of next term to the sum, we get the sum the two previous terms, repeat until 
                the count reaches total length.
            */
            sum = sum + next_term;
        }
        /*Display the final sum for the given length.*/
        cout << "\nThe sum of sequence s = 1 + 1/2 + 1/3 + ... of length " << sequence_length << " is " << sum << endl;
    }
}