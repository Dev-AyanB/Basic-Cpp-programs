/*
    cpp program to swap the alternate elements of array
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::swap;

void swap(int arr[], int size)
{
    int front = 0;
    int endd = 1;
    while (front < endd)
    {
        if (front > size || endd > size)
        {
            return;
        }

        swap(arr[front], arr[endd]);

        front = front + 2;
        endd = endd + 2;
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}
int main()
{
    int userInput;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    swap(arr, 10);
    printArray(arr, 10);
    return 0;
}