/*
    Implementation for summing the sequence (s = 1 + 2 + 3 + ...) upto n, where
    n is the number provided by the user.
*/
#include <iostream>
using namespace std;

void SequenceOne()
{
    int sequence_length;    float sum, count;
    /*Read the length of sequence to be summed.*/
    cout << "\nEnter the number of terms for sequence (s = 1 + 2 + 3 + ...) to be summed: ";
    cin >> sequence_length;
    sum = 1;
    /*Ensure that the sequence length is greater than zero.*/
    if (sequence_length <= 0)
    {
        cout << "\nThe sequence for number of term equal to " << sequence_length << " cannot be summed." << endl;
    }
    else
    {
        /*As sum is already initialized with the first term, hence the counter count begins from second term.*/
        for (count = 2; count <= sequence_length; count++)
        {
            /*Adding next number using count to the recent value of sum.*/
            sum = sum + count;
        }
        cout << "\nThe sum of sequence s = 1 + 2 + 3 + ... of length " << sequence_length << " is " << sum << endl;
    }
}