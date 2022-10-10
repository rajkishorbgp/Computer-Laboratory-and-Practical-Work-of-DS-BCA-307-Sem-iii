/*
                program: 9
    Write a C++ program To copy a string into another string.
*/

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str1, str2;
    cout << "Enter the string: ";
    cin >> str1;
    str2 = str1;
    cout << "Copy a string: " << str2 << endl;
    return 0;
}

/*
    Output:
    Enter the string: rajkishorbgp
    Copy a string: rajkishorbgp
*/