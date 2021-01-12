/*
    Implementation for calculating average for given numbers.
*/

#include <iostream>
using namespace std;

int AverageOfNumbers(int number)
{
    /*Declare the required variables.*/
    int count, sum, numbers;    char conti;

    do
    {
        /*Initializing the sum to zero.*/
        sum = 0;
        /*Check that the number entered is not zero, if it is zero, cannot calculate the sum and average.*/
        if (number <= 0)
        {
            cout << "\nThe number you have entered is " << number << ", cannot calculate average for zero. ";
            cout << "Hence exiting the program." << endl;
            return 0;
        }
        else
        {
            /*Summing the numbers until the count reaches the total numbers.*/
            for (count = 1; count <= number; count++)
            {
                cout << "\nEnter the " << count << " number: ";
                cin >> numbers;
                sum = sum + numbers;
            }
            /*Displaying the average by dividing the sum by total numbers.*/
            cout << "\nThe average for the given numbers is: " << sum / number;
        }
        cout << "\nDo you want to calculate average for different values of " << number << " numbers? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' || conti == 'y');
    return 0;
}