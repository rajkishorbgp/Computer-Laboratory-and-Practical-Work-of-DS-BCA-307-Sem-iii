/*
        program: 4
    Write a C++ program To insert an element in an array
*/

#include <iostream>
using namespace std;

void addArray(int arr[], int size, int position, int value)
{
    int i = size - 2;
    while (i >= position)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = arr[i];
    arr[i] = value;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size, *arr, i;
    int position, value;
    cout << "Enter the size of Array: ";
    cin >> size;
    arr = new int[size];
    cout << "Enter the " << size - 1 << " element: ";
    for (i = 0; i < size - 1; i++)
    {
        cin >> arr[i];
    }
    cout << "Element is present in the array" << endl;
    printArray(arr, size - 1);

    cout << "Enter the location where you want to insert an element: ";
    cin >> position;

    cout << "Enter the value to insert: ";
    cin >> value;

    addArray(arr, size, position, value);
    printArray(arr, size);

    return 0;
}

/*
    Output:
    Enter the size of Array: 5
    Enter the 4 element: 2 3 4 5
    Element is present in the array2 3 4 5
    Enter the location where you want to insert an element: 4
    Enter the value to insert: 2
    2 3 4 2 5
*/