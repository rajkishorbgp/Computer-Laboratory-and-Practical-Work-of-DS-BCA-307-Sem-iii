/*
                    program: 2
    write a c++ program To read n numbers and display it, to demonstrate the
    concept of ane dimensional array finding.
*/

#include <iostream>
using namespace std;
int main()
{
    int size, i;
    int *arr;
    cout << "Enter the element you want to store in the array: ";
    cin >> size;
    arr = new int[size];
    cout << "Enter the " << size << " element." << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Element is present in the array" << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

/*
    Output:
    Enter the element you want to store in the array: 9
    Enter the 9 element.
    9 8 7 6 5 4 3 2 1
    Element is present in the array
    9 8 7 6 5 4 3 2 1

*/