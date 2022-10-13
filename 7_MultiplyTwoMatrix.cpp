/*
            program: 7
        Write a program To multiply two matrix A and B.
*/

#include <iostream>
using namespace std;
int main()
{
    int a[3][3], b[3][3], i, j, k, sum;
    cout << "Enter the element of 3X3 matrix A :" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl
         << "Enter the element of 3X3 matrix B :" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << endl
         << "multiply of two matrix A and B: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum = sum + (a[i][k] * b[k][j]);
            }
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
    Output:
    Enter the element of 3X3 matrix A :
    2 2 2
    3 3 3
    4 4 4

    Enter the element of 3X3 matrix B :
    2 2 2
    3 3 3
    4 4 4

    multiply of two matrix A and B:
    18 18 18
    27 27 27
    36 36 36

*/