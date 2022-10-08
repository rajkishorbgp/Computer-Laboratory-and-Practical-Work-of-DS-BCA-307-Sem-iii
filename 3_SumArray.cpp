/*
            program: 3
    Write a program to sum of all elements in array.
*/

#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,sum=0;
    cout<<"Enter the ten element in array: ";
    for ( i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    cout<<"Element is present in the array"<<endl;
    for ( i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
        sum=sum+arr[i];
    }
    cout<<endl<<"Sum of all elements :"<<sum;   
    return 0;
}

/*
    Output:
    Enter the ten element in array: 8 5 3 5 5 3 2 6 8 4
    Element is present in the array
    8 5 3 5 5 3 2 6 8 4
    Sum of all elements :49
*/