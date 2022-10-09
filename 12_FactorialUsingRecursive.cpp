/*
                program : 12
    Write a program to Calculate factorial of a number using recursive function.
*/
#include <iostream>
using namespace std;

// factorial function
int isFactorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * isFactorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "factorial: " << isFactorial(n) << endl;
    return 0;
}

/*
    Output:
    Enter the number: 6
    factorial: 720
*/