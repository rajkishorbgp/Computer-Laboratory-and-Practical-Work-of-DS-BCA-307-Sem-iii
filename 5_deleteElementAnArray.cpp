/*
            program: 5
    Write a C++ program To delete an element from an array.
*/

#include <iostream>
using namespace std;
void printArray(int *, int);
void deleteArray(int *, int, int);
int main()
{
    int *arr, size, position, i;
    cout << "Enter the size of array: ";
    cin >> size;
    arr = new int[size];

    cout << "Enter the " << size << " element: " << endl;
    for (i = 0; i < size; i++) // insert element in array
    {
        cin >> arr[i];
    }

    cout << "Element is present in the array" << endl;
    printArray(arr, size);
    cout << "Enter the location you want to delete an array: ";
    cin >> position;
    deleteArray(arr, size, position);
    printArray(arr, size - 1);
    return 0;
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

void deleteArray(int arr[], int size, int position)
{
    int i;
    for (i = position - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}