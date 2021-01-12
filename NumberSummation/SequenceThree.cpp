/*
    Implementation for summing the sequence (s = 2 + 4 + 6 + ...) of even numbers 
    upto n, where n is the number provided by the user.
*/

#include <iostream>
using namespace std;

void SequenceThree()
{
    int sequence_length;    float sum, next_term, count;
    /*Read the length of sequence to be summed.*/
    cout << "\nEnter the number of terms for sequence (s = 2 + 4 + 6 + ...) to be summed: ";
    cin >> sequence_length;
    /*Initialize the sum & next_term to 2 as the first term in the sequence is 2.*/
    sum = 2;    next_term = 2;
    /*Ensuring that the sequence length is greater than zero.*/
    if (sequence_length <= 0)
    {
        cout << "\nThe sequence for number of term equal to " << sequence_length << " cannot be summed." << endl;
    }
    else
    {
        /*As sum is already initialized with the first term in sequence i.e. 2, the counter count begins from second term.*/
        for (count = 2; count <= sequence_length; count++)
        {
            next_term = next_term + 2;  /*Calculate and store the value of next term in sequence by adding 2.*/
            /*
                By adding the value of next term to the sum, we get the sum the two previous terms, 
                repeat until the count reaches total length.
            */
            sum = sum + next_term;
        }
        /*Display the final sum for the given length.*/
        cout << "\nThe sum of sequence s = 2 + 4 + 6 + ... of length " << sequence_length << " is " << sum << endl;
    }
}