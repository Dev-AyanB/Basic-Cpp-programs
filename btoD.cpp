using namespace std;
#include <iostream>
int main()
{
    int n = 101;
    int ans = 0, digit = 0;
    int numberOfDigits = std::to_string(n).length();
   
    if (n > 0)
    {
        cout << "1";
        for (int i = 0; i < 30-numberOfDigits; i++)
        {
            cout << 0;
        }
        cout << n <<endl;
        cout << std::to_string(1000000000000000000000000000101).length();
    }

    return 0;
}