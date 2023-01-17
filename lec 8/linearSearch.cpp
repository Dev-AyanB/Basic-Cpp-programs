/*
    cpp program to search for an element in array using Linear search
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool LinearSearch(int arr[], int size, int userInput)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == userInput)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    bool found;
    int userInput;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Enter the element to be searched";
    cin >> userInput;
    found = LinearSearch(arr, 10, userInput);
    if (found)
    {
        cout << "Element found";
        return 0;
    }
    cout << "Element Not found";
    return 0;
}