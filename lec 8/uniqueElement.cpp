/*
    CPP program to find unique element in an array
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int unique(int arr[], int size)
{
    int unq = 0;
    for (int i = 0; i < size; i++)
    {
        unq = unq ^ arr[i];
    }
    return unq;
}
int main()
{

    int arr[10] = {1, 2, 2, 4, 4, 6, 6, 8, 8};
    cout << unique(arr, 9);
    return 0;
}