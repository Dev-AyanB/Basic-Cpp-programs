#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int number = -6;
    number = abs(number);
    int ans = 0, bit = 0;
    int i = 0;
    while (number != 0)
    {
        bit = number & 1;
        ans = (bit * pow(10, i) + ans);
        number = number>>1;
        i++;
    }
    cout<<-1*ans;
}