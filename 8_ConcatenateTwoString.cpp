/*
            program: 8;
    Write a C++ program To Concatenate two string.
*/

#include <iostream>
using namespace std;
int main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    cout << "Concatenate two string: " << str1 + str2 << endl;
    return 0;
}

/*
    Output:
    Enter the first string: Raj
    Enter the second string: Kishor
    Concatenate two string: RajKishor
*/