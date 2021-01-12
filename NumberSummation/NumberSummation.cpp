/*NumberSummation.cpp : This file contains the 'main' function. Program execution begins and ends there.*/
/*
    Program for performing various summation operations. This program is an implementation in C++ of 
    algorithm for interchanging the values from the book "How to Solve it by Computer" by R.G. Dromey.
*/

#include <iostream>
#include "summationf.h"
using namespace std;
const int FIRSTOPTION = 1, LASTOPTION = 9;

int main()
{
    int choice, total_number;   char conti;

    do
    {
        /*Providing options to the user for performing the summation of numbers.*/
        cout << "\n1. Summation of numbers\n2. Calculate average\n3. Summation of numbers using (n-1) addition operations";
        cout << "\n4. Summation of squared numbers\n5. Find Harmonic Mean:\t\t\t    n\n\t\t\tH=\t----------------------------\n\t\t\t\t(1/a1) + (1/a2) +...+ (1/ai)";
        cout << "\n6. Summation of various sequences\n7. Generate sequence (1 2 4 8 12...) for given terms\n8. Generate alternate signed sequence (1 -1 1 -1 1...) for given terms";
        cout << "\n9. Summation of sequence (s = 1 - 3 + 5 - 7 + ...)for given terms\nEnter your choice : ";
        cin >> choice;
        /*Check if the choice entered by the user is valid i.e. not other than those displayed.*/
        if (choice < FIRSTOPTION || choice > LASTOPTION)
        {
            cout << "\nThe choice you entered is invalid. Exiting the program.";
            return 0;
        }
        else
        {
            /*Functions are called according to the value of choice.*/
            switch (choice)
            {
            case 1: SummationOfNumbers();
                    break;

            case 2: cout << "\nEnter the total numbers to calculate average from." << endl;
                    cin >> total_number;
                    AverageOfNumbers(total_number);
                    break;

            case 3: SummationWithLessAdditionOperations();
                    break;

            case 4: SummationOfSquaredNumbers();
                    break;

            case 5: HarmonicMean();
                    break;

            case 6: SummationOfNumberSequences();
                    break;

            case 7: GenerateSequence();
                    break;

            case 8: AlternateSignedSequence();
                    break;

            case 9: AlternateSignedSequenceSummation();
                    break;
            }
        }
        /*Asking the user if he intends to different summation operation.*/
        cout << "\nDo you want to perform different summation operation? (Y/N)" << endl;
        cin >> conti;
    }while(conti == 'Y' || conti == 'y');
}