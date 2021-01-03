// NumberSummation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Program for performing various summation operations.

#include <iostream>
using namespace std;
const int FirstChoice = 1, LastChoice = 9;

//Functions declared.
int SummationOfNumbers();
int AverageOfNumbers(int number);
void SummationOfNumbersWithLessAdditionOperations();
void SummationOfSquaredNumbers();
void HarmonicMean();
void SummationOfNumberSequences();
void GenerateSequence();
void AlternateSignedSequence();
void SummationOfAlternateSignedSequence();

int main()
{
    int choice, total_number;   char conti;

    do
    {
        //Providing options to the user for performing the summation of numbers.
        cout << "\n1. Summation of numbers\n2. Calculate average\n3. Summation of numbers using (n-1) addition operations";
        cout << "\n4. Summation of squared numbers\n5. Find Harmonic Mean:\t\t\t    n\n\t\t\tH=\t----------------------------\n\t\t\t\t(1/a1) + (1/a2) +...+ (1/ai)";
        cout << "\n6. Summation of various sequences\n7. Generate sequence (1 2 4 8 12...) for given terms\n8. Generate alternate signed sequence (1 -1 1 -1 1...) for given terms";
        cout << "\n9. Summation of sequence (s = 1 - 3 + 5 - 7 + ...)for given terms\nEnter your choice : ";
        cin >> choice;

        if (choice < FirstChoice or choice > LastChoice)    //Check if the choice entered by the user is not invalid i.e. not other than those displayed. 
        {
            cout << "\nThe choice you entered is invalid. Exiting the program.";
            return 0;
        }

        else
        {
            switch (choice)
            {
            case 1: SummationOfNumbers();
                break;

            case 2: cout << "\nEnter the total numbers to calculate average from." << endl;
                cin >> total_number;
                AverageOfNumbers(total_number);
                break;

            case 3: SummationOfNumbersWithLessAdditionOperations();
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

            case 9: SummationOfAlternateSignedSequence();
                break;
            }
        }

        cout << "\nDo you want to perform different summation operation? (Y/N)" << endl;
        cin >> conti;

    } while (conti == 'Y' or conti == 'y');
}

//Implementation for adding and displaying the total sum of the given numbers
int SummationOfNumbers()
{
    //Declaring the required variables: total_number to get total numbers; count to keep the count; sum to store the sum of numbers; and number to store actual number to be summed.
    int total_number, count, number, sum; char conti;

    do
    {
        sum = 0;    //Initializing the sume to zero.
        //Reading the total number that are to be summed.
        cout << "\nEnter the total number of numbers to be summed." << endl;
        cin >> total_number;

        if (total_number <= 0)  //Checking the total_number is not zero or less, if it is then there are no numbers to sum.
        {
            cout << "\nThe total quantity of numbers you entered is not more than zero and cannot be summed. Hence exiting the program." << endl;
            return 0;
        }
        else
        {
            //For loop will execute until the count reaches the total number that are to be summed.
            for (count = 1; count <= total_number; count++)
            {
                cout << "\nEnter the " << count << " number: ";
                cin >> number;
                sum = sum + number;
            }
            cout << "\nThe sum of all the numbers is: " << sum;
        }
        //Asking the user if he intends to sum another set of numbers.
        cout << "\nDo you want to sum another set of numbers? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
}

//Implementation for calculating average of given numbers.
int AverageOfNumbers(int number)
{
    //Declaring the required variables.
    int count, sum, numbers;    char conti;

    do
    {
        sum = 0;    //Initializing the sum to zero.
        if (number <= 0)    //Checking if the number entered is not zero, if it is zero, cannot sum the numbers and cannot calculate average.
        {
            cout << "\nThe number you have entered is " << number << ", cannot calculate average for zero. Hence exiting the program." << endl;
            return 0;
        }

        else
        {
            //Summing the numbers until the count reaches the total numbers.
            for (count = 1; count <= number; count++)
            {
                cout << "\nEnter the " << count << " number: ";
                cin >> numbers;
                sum = sum + numbers;
            }
            cout << "\nThe average for the given numbers is: " << sum / number; //Displaying the average by dividing the sum by total numbers.
        }
        cout << "\nDo you want to calculate average for different values of " << number << " numbers? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
    return 0;
}

//Implementation of summation of given numbers by performing (n-1) addition operations.
void SummationOfNumbersWithLessAdditionOperations()
{
    //Declaring the required variables.
    int total_number, count, sum, number;   char conti;

    do
    {
        sum = 0;    //Initializing the sum to zero.
        //Reading the total numbers to be summed from the user.
        cout << "\nEnter the total numbers to be summed." << endl;
        cin >> total_number;

        if (total_number <= 0)  //Checking if the total number entered is not zero, if it is there are no numbers to sum.
        {
            cout << "\nThe total quantity of numbers you entered is not more than zero and cannot be summed. Hence exiting the program." << endl;
        }
        else
        {
            for (count = 1; count <= total_number; count++) //Summing the numbers until the count reaches the total_number entered by the user.
            {
                cout << "\nEnter the " << count << " number: ";
                cin >> number;

                if (count == 1) //Assigning the first number entered to the sum, so only (n-1) addition operations are performed.
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
    } while (conti == 'Y' or conti == 'y');
}

//Implementation of summation of squared numbers.
void SummationOfSquaredNumbers()
{
    //Declaring the required variables.
    int total_number, count, sum, number, square_num;   char conti;

    do
    {
        sum = 0;    //Initializing the sum to zero.
        //Read the total number of terms to be squared and summed.
        cout << "\nEnter the total number of terms to be squared and summed." << endl;
        cin >> total_number;

        if (total_number <= 0)  //Checking if the term to be squared and summed is zero. If it is zero no need to calculate.
        {
            cout << "\nThe total terms you entered is zero, the squared term is again 0. Exiting the program." << endl;
        }
        else
        {
            for (count = 1; count <= total_number; count++) //Until the count reaches total_number, square and add the terms.
            {
                cout << "\nEnter the " << count << " number: ";
                cin >> number;

                square_num = number * number;   //Obtain square of the number by multiplying with itself.

                if (count == 1)
                {
                    sum = square_num;
                }
                else
                {
                    sum = sum + square_num;
                }
            }
            cout << "\nThe sum of squared terms is: " << sum << endl;   //Displaying the sum of squared terms to the user.
        }
        cout << "\nDo you want to find the sum of another squared terms? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
}

//Implementation for finding Harmonic mean: H= n/[(1/a1)+(1/a2)+...+(1/ai)]
void HarmonicMean()
{
    //Declaring the required variables: n to get value of n; number to get value of ai; term to calculate 1/ai; sum to store the sum of the terms
    float n, number, term, sum, count;  char conti;

    do
    {
        sum = 0;    //Initializing the value of sum to zero.

        cout << "\nEnter non-negative value for n: ";    //Reading the value of n from the user.
        cin >> n;

        if (n == 0 or n < 0) //If value of n=0, Harmonic Mean cannot be calculated.
        {
            cout << "\nCannot calculate Harmonic Mean for n=" << n << ". n should have non-negative value greater than 0. " << endl;
        }
        else
        {

            for (count = 1; count <= n; count++)    //Until the count is less than or equal to n, calculate term and sum.
            {
                cout << "\nEnter the value of a" << count << ": ";
                cin >> number;

                term = 1 / number;  //Calculating the 1/ai.

                if (count == 1)
                {
                    sum = term;
                }
                else
                {
                    sum = sum + term;
                }
            }
            //Displaying the value of Harmonic Mean by dividing n by sum.
            cout << "\nThe Harmonic Mean H= n/[(1/a1)+(1/a2)+...+(1/ai)] for n=" << n << " is: " << n / sum << endl;
        }
        cout << "\nDo you want to calculate Harmonic Mean for another value of n? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
}

//Implementation for summing the sequences.
void SummationOfNumberSequences()
{
    /*
        Note: Ideally there should be seperate method(s) for the each sequences to be generated. Do change this
        code whenever possible and create seperate methods or function for each sequence. One method or
        function should perform one task and not more than that.
    */
    int choice, sequence_length; float sum, next_term, count;   char conti;   //Declaring the required variables.

    do
    {
        //Displaying the user with different sequences to calculate the sum for it.
        cout << "\nChoose from the following options of sequences to get sum for\n1. s = 1 + 2 + 3 + ...\n2. s = 1 + 3 + 5 + ...\n3. s = 2 + 4 + 6 + ...";
        cout << "\n4. s = 1 + 1/2 + 1/3 + ...\nEnter your choice: ";
        cin >> choice;

        if (choice < 0 or choice > 4)   //Check if the options chosen by user is valid.
        {
            cout << "\nThe choice you entered is invalid. Exiting the program.";
        }
        else
        {
            switch (choice)
            {
            case 1: cout << "\nEnter the number of terms for sequence (s = 1 + 2 + 3 + ...) to be summed: "; //Read the length of sequence to be summed.
                cin >> sequence_length;
                sum = 1;

                if (sequence_length <= 0)   //Ensuring that the sequence length is greater than zero.
                {
                    cout << "\nThe sequence for number of term equal to " << sequence_length << " cannot be summed." << endl;
                }
                else
                {
                    for (count = 2; count <= sequence_length; count++)  //As sum is already initialized with the first term, hence the counter count begins from second term.
                    {
                        sum = sum + count;  //Adding next number using count to the recent value of sum.
                    }
                    cout << "\nThe sum of sequence s = 1 + 2 + 3 + ... of length " << sequence_length << " is " << sum << endl;
                }
                break;

            case 2: cout << "\nEnter the number of terms for sequence (s = 1 + 3 + 5 + ...) to be summed: "; //Read the length of sequence to be summed.
                cin >> sequence_length;
                sum = 1;    next_term = 1;

                if (sequence_length <= 0)   //Ensuring that the sequence length is greater than zero.
                {
                    cout << "\nThe sequence for number of term equal to " << sequence_length << " cannot be summed." << endl;
                }
                else
                {
                    for (count = 2; count <= sequence_length; count++)  //As sum is already initialized with the first term i.e. 1, the counter count begins from second term.
                    {
                        next_term = next_term + 2;  //Calculate the next term in sequence by adding 2.
                        sum = sum + next_term;      //by adding the value of next term to the sum, we get the sum the two previous terms, repeat until the count reaches total length.
                    }
                    //Display the final sum for the given length.
                    cout << "\nThe sum of sequence s = 1 + 3 + 5 + ... of length= " << sequence_length << " is " << sum << endl;
                }
                break;

            case 3: cout << "\nEnter the number of terms for sequence (s = 2 + 4 + 6 + ...) to be summed: "; //Read the length of sequence to be summed.
                cin >> sequence_length;
                sum = 2;    next_term = 2;  //Initializing the sum & next_term to 2 as the first term in the sequence is 2.

                if (sequence_length <= 0)   //Ensuring that the sequence length is greater than zero.
                {
                    cout << "\nThe sequence for number of term equal to " << sequence_length << " cannot be summed." << endl;
                }
                else
                {
                    for (count = 2; count <= sequence_length; count++)  //As sum is already initialized with the first term i.e. 1, the counter count begins from second term.
                    {
                        next_term = next_term + 2;  //Calculate and store the value of next term in sequence by adding 2.
                        sum = sum + next_term;      //By adding the value of next term to the sum, we get the sum the two previous terms, repeat until the count reaches total length.
                    }
                    //Display the final sum for the given length.
                    cout << "\nThe sum of sequence s = 2 + 4 + 6 + ... of length " << sequence_length << " is " << sum << endl;
                }
                break;

            case 4: cout << "\nEnter the number of terms for sequence (s = 1 + 1/2 + 1/3 + ...) to be summed: "; //Read the length of sequence to be summed.
                cin >> sequence_length;
                sum = 1;    next_term = 1;  //Initializing the sum & next_term to 1 as the first term required in the sequence begins with 1.

                if (sequence_length <= 0)   //Ensuring that the sequence length is greater than zero.
                {
                    cout << "\nThe sequence for number of term equal to " << sequence_length << " cannot be summed." << endl;
                }
                else
                {
                    for (count = 2; count <= sequence_length; count++)  //As sum is already initialized with the first term i.e. 1, the counter count begins from second term.
                    {
                        next_term = 1 / count;      //Calculate the next term in sequence by dividing 1 by the current count.
                        sum = sum + next_term;      //By adding the value of next term to the sum, we get the sum the two previous terms, repeat until the count reaches total length.
                    }
                    //Display the final sum for the given length.
                    cout << "\nThe sum of sequence s = 1 + 1/2 + 1/3 + ... of length " << sequence_length << " is " << sum << endl;
                }
                break;
            }
        }
        cout << "\nDo you want to calculate sum for different sequence with new number of terms in it? (Y/N)";
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
}

//Implementation for generating sequence (1 2 4 8 16...) for given number of terms.
void GenerateSequence()
{
    int term, total_terms;  char conti;
    do
    {
        term = 1;   //Initializing the term to 1.
        //Read the total terms in sequence to be generated.
        cout << "\nEnter the total number of terms in sequence to be generated: ";
        cin >> total_terms;

        if (total_terms < 1)   //Check if the number of terms in sequence is not les than 1
        {
            cout << "\nThe sequence cannot be generated for the total terms equal to " << total_terms << ", terms should be more than 0." << endl;
        }
        else
        {
            cout << "\nThe sequence for " << total_terms << " terms is";
            for (int count = 0; count < total_terms; count++)
            {
                cout << " " << term;    //Display the value of term.
                term = term + term;     //Calculate next term in sequence by adding the term to itself.
            }

        }
        cout << "\nDo you want to generate another sequence for different number of terms? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
}

//Implmentation for generating alternate signed sequence (1 -1 1 -1 1 -1...) for given number of terms.
void AlternateSignedSequence()
{
    int total_terms, number, sequence;  char conti;

    do
    {
        sequence = 1;
        cout << "\nEnter the total number of terms in sequence to be generated: ";
        cin >> total_terms;

        if (total_terms < 1)
        {
            cout << "\nThe sequence cannot be generated for the total terms equal to " << total_terms << ", terms should be more than 0." << endl;
        }
        else
        {
            for (int count = 1; count <= total_terms; count++)
            {
                cout << " " << sequence;
                sequence = -sequence;   //Change the sign of the sequence, looping this will give you alternating signs for the number in sequence.
            }
        }
        cout << "\nDo you want to generate this sequence again with different number of terms? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
}

//Implementation for summation of alternately signed sequence (1 - 3 + 5 - 7...) for given number of terms.
void SummationOfAlternateSignedSequence()
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
            /*
                Note: Trying to explain the logic behind achieving this, as it was difficult at the beginning to come with this solution.
                Here we need to sum the sequence of odd numbers with alternate signs. So, we need to generate next number which is an odd number,
                this is achieved by adding 2 to the 'next_term' as it is already initialized to 1. Now, you can see that the first term '1' has
                positive sign, second term '-3' has negative sign and third term '5' again has positive sign, we can conclude that the all the odd
                numbers in even places have negative sign (like 3, 7, 11 and so on), which we need to subtract and all the odd numbers in odd places
                have positive sign (like 1, 5, 9 and so on). So, we need to subtract the odd numbers which are at even places from the 'sum' and
                add odd numbers which are at odd places to the 'sum'. This we achieve by using 'count' and looping it till the count reaches the
                total number of terms (total_terms) entered by the user, when the count is even the number at the even place is subtracted from
                'sum' and when the count is odd, the number at the odd place is added to the 'sum'.
            */
            for (int count = 1; count <= total_terms; count++)
            {
                if (count % 2 == 0)     //If the count is even, substract the next term from sum.
                {
                    sum = sum - next_term;
                }
                else                    //If the count is odd, add the next term to sum.
                {
                    sum = sum + next_term;
                }
                next_term = next_term + 2;
            }
            cout << "\nThe sum for sequence of odd number terms with alternate sign is " << sum << endl;
        }
        cout << "\nDo you want to sum sequence (1 - 3 + 5 - 7 + ...) with different number of terms? (Y/N)" << endl;
        cin >> conti;
    } while (conti == 'Y' or conti == 'y');
}