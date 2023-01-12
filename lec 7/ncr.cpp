#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int factorial(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n, r;
    cout << "Enter the value of C";
    cin >> n;
    cout << "Enter the value of R";
    cin >> r;
    cout << (factorial(n) / (factorial(r) * factorial(n - r)));
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}