#include <iostream>
using namespace std;

int main()
{
    // int sum = 0;
    // int a[5] = {1, 2, 3, 4, 5};
    // for (int i = 0; i < 5; i++)
    // {
    // sum = sum + a[i];
    // }
    // cout << sum << endl;
    int number = 1024;
    int count = 0;
    while (number != 0)
    {
        if (number >> 1 & 1)
        {
            count++;
            if (count == 2)
            {
                cout << "not a power of 2";
                        }
        }
        number = number >> 1;
    }
    cout << "power of 2";
}