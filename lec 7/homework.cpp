/*
    cpp program to find ap, set bits and fibonnacci series
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int ap(int userInput)
{
    return (3 * userInput + 7);
}

int setBit(int userInput1, int userInput2)
{
    int count = 0;
    while (userInput1 != 0 || userInput2 != 0)
    {
        if (userInput1 >> 1 & userInput1 >> 1)
        {
            count++;
        }
        userInput1 = userInput1 >> 1;
        userInput2 = userInput2 >> 1;
    }
    return count;
}

void fibonacci(int userInput)
{
    int zero = 0;
    int one = 1;
    int temp = 0;
    for (int i = 0; i < userInput; i++)
    {
        temp = zero + one;
        zero = one;
        one = temp;
        cout << temp << '\n';
    }
}
int main()
{
    int userChoice;
    cout << "Enter your choice 1. ap 2. setbit 3.fibonacci " << '\n';
    cin >> userChoice;
    switch (userChoice)
    {
    case 1:
        int userInput;
        cout << "Enter the number for ap" << '\n';
        cin >> userInput;
        cout << ap(userInput) << endl;
        break;
    case 2:
        int userInput1, userInput2;
        cout << "Enter the numbers for setbit" << '\n';
        cin >> userInput1 >> userInput2;
        cout << setBit(userInput1, userInput2) << endl;
        break;
    case 3:
        cout << "Enter the fibonacci series limit";
        cin >> userInput;
        fibonacci(userInput);
        break;
    default:
        break;
    }
    return 0;
}