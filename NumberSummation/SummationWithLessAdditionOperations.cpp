/*
    Implementation for summation of given numbers by performing (n-1) addition operations. Where
    n is the total numbers entered by the user to be summed.
*/

#include <iostream>
using namespace std;

void SummationWithLessAdditionOperations()
{
    /*Declare the required variables.*/
    int total_number, count, sum, number;   char conti;

    do
    {
        /*Initializing the sum to zero.*/
        sum = 0;
        /*Read the total numbers to be summed from the user.*/
        cout << "\nEnter the total numbers to be summed." << endl;
        cin >> total_number;
        /*Checking if the total number entered is not zero, if it is there are no numbers to sum.*/
        if (total_number <= 0)
        {
            cout << "\nThe total quantity of numbers you entered is not more than zero and cannot be summed. Hence exiting the program." << endl;
        }
        else
        {
            /*Summing the numbers until the count reaches the total_number entered by the user.*/
            for (count = 1; count <= total_number; count++)
            {
                cout << "\nEnter the " << count << " number: ";
                cin >> number;
                /*Assigning the first number entered to the sum, so only (n-1) addition operations are performed.*/
                if (count == 1)
                {
                    sum = number;
                }
                else
                {
                    sum = sum + number;
                }
            }
            cout << "\nThe sum of all the numbers is: " << sum << endl;
        }
        cout << "\nDo you want sum of different numbers using this method? (Y/N):";
        cin >> conti;
    } while (conti == 'Y' || conti == 'y');
}