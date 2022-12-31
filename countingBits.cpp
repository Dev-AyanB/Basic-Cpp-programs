#include<iostream>
using namespace std;

int main()
{
    int n = 11;
    int ans = ~n;
    cout << (ans & 1);
    return 0;
}