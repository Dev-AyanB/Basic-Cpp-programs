#include <iostream>
using namespace std;

int main()
{
    long int N, limit = 737373737;

    for (N = 1; N < limit; N++)
    {
        if (6 * N + 1 == limit || 6 * N - 1 == limit)
        {
            cout << "prime";
            return 0;
        }
        if ((6 * N - 1) > limit || (6 * N + 1) > limit)
        {
            cout << "not prime";
            return 0;
        }
    }
    return 0;
}
