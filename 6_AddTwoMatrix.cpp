/*
            program: 6
     Write a program To add two matrix A and B.
*/

#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],i,j;
    cout<<"Enter the element of 3X3 matrix A :"<<endl;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl<<"Enter the element of 3X3 matrix B :"<<endl;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<endl<<"Add of two matrix A and B: "<<endl;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<a[i][j]+b[i][j]<<" ";
        }
        cout<<endl;
    }   
    return 0;
}

/*
    output:
    Enter the element of 3X3 matrix A :
    2 3 5
    5 3 2
    4 5 3

    Enter the element of 3X3 matrix B :
    2 4 7 
    5 3 2
    7 8 9

    Add of two matrix A and B: 
    4 7 12 
    10 6 4 
    11 13 12
*/