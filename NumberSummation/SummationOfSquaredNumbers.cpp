/*
    Implementation for summation of squared numbers, where the total number in summation
    is read from the user.
*/

#include <iostream>
using namespace std;

void SummationOfSquaredNumbers()
{
    /*Declare the required variables.*/
    int total_number, count, sum, number, square_num;   char conti;

    do
    {
        /*Initializing the sum to zero.*/
        sum = 0;
        /*Read the total number of terms to be squared and then summed.*/
        cout << "\nEnter the total number of terms to be squared and summed." << endl;
        cin >> total_number;
        /*Check if the term to be squared and summed is zero. If it is zero no need to calculate.*/
        if (total_number <= 0)
        {
            cout << "\nThe total terms you entered is zero, the squared term is again 0. Exiting the program." << endl;
        }
        else
        {
            /*Until the count reaches total_number, square and add the numbers.*/
            for (count = 1; count <= total_number; count++)
            {
                cout << "\nEnter the " << count << " number: ";
                cin >> number;
                /*Obtain square of the number by multiplying with itself.*/
                square_num = number * number;

                if (count == 1)
                {
                    sum = square_num;
                }
                else
                {
                    sum = sum + square_num;
                }
            }
            /*Displaying the sum of squared terms to the user.*/
            cout << "\nThe sum of squared terms is: " << sum << endl;
        }
        cout << "\nDo you want to find the sum of another squared terms? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' || conti == 'y');
}