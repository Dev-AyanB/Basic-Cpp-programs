/*
    cpp program to swap the elements of array
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::swap;

void swap(int arr[], int size)
{
    int front = 0;
    int endd = size - 1;
    while (front <= endd)
    {
        swap(arr[front], arr[endd]);
        front++;
        endd--;
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