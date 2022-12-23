/*
    cpp program to find prime number.

    working :
    use a for loop to count from 2 to n/2 th term ( n being the user input)
    loop should run till n/2 since no factor is greater than half of the number.
    if a number inbetween divides the number with no remainder break out of loop and print it as "Not prime".

*/

#include <iostream>

using namespace std;

int main()
{
    signed int userInput, index;
    cout << "Enter the number to be checked for prime. Ex - 17 " << endl;
    cin >> userInput;

    // Testing for the exceptional cases

    if (userInput <= 1)
    {
        cout << "not prime";
        return 0;
    }

    if (userInput == 2 || userInput == 3)
    {
        cout << "Prime";
        return 0;
    }

    for (index = 2; index <= userInput / 2;index++)
    {
        if (userInput % index == 0)
        {
            cout << "Not prime";
            return 0;
        }
    }
    cout << "prime";
    return 0;
}