/*                        Program: 18
    Write a C++ program to Arrange the list of numbers in ascending order using Bubble Sort.
*/

#include <iostream>
using namespace std;
void bubbleSort(int[], int);
void printArray(int[], int);

int main()
{
    int size, *arr, i;
    cout << "Enter the element you want to store in the array: ";
    cin >> size;
    arr = new int[size];
    cout << "Enter the " << size << " numbers: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Arrange the list ascending order." << endl;
    bubbleSort(arr, size);
    printArray(arr, size);
}

void bubbleSort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
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

/*
    Output:
    Enter the element you want to store in the array: 9
    Enter the 9 numbers: 9 8 7 6 5 4 3 2 1
    Arrange the list ascending order.
    1 2 3 4 5 6 7 8 9

*/