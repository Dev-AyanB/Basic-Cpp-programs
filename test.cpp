#include<iostream>

using namespace std;

int main()
{
    int n = 5;
    int bits = 0;
    while (n != 0)
    {
        bits = (bits*10 + (n & 1));
        
        n = n >> 1;
    }
    cout << bits << ' ';
    cout << ~5;
    return 0;
}