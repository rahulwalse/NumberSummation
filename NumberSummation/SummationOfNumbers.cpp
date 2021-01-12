/*
    Implementation for adding and displaying the total sum for given numbers.
*/

#include <iostream>
using namespace std;

int SummationOfNumbers()
{
    /*
        Declaring the required variables: total_number to get total numbers; count to keep the count; 
        sum to store the sum of numbers; and number to store actual number to be summed.
    */
    int total_number, count, number, sum;   char conti;

    do
    {
        /*Initializing the sum to zero.*/
        sum = 0;
        /*Read the total number that are to be summed.*/
        cout << "\nEnter the total number of numbers to be summed." << endl;
        cin >> total_number;

        /*Checking the total_number is not zero or less, if it is then there are no numbers to sum.*/
        if (total_number <= 0)
        {
            cout << "\nThe total quantity of numbers entered is not more than zero and cannot be summed.";
            cout << "Hence exiting the program." << endl;
            return 0;
        }
        else
        {
            /*For loop will execute until the count reaches the total number that are to be summed.*/
            for (count = 1; count <= total_number; count++)
            {
                cout << "\nEnter the " << count << " number: ";
                cin >> number;
                sum = sum + number;
            }
            cout << "\nThe sum of all the numbers is: " << sum;
        }
        /*Asking the user if he intends to sum another set of numbers.*/
        cout << "\nDo you want to sum another set of numbers? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' || conti == 'y');
}