/*
            program: 3
    Write a program to sum of all elements in array.
*/

#include <iostream>
using namespace std;
int main()
{
    int *arr, i, size, sum = 0;
    cout << "How many element you want to sum : ";
    cin >> size;
    arr = new int[size];
    cout << "Enter the " << size << " element in array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Element is present in the array" << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        sum = sum + arr[i];
    }
    cout << endl
         << "Sum of all elements :" << sum;
    return 0;
}

/*
    Output:
    How many element you want to sum : 5
    Enter the 5 element in array: 4 3 2 1 6
    Element is present in the array
    4 3 2 1 6
    Sum of all elements :16

*/