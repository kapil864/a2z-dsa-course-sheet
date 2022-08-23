/*
    Print the pattern

    1
    01
    101
    0101
    10101

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            if (j % 2 == 0)
            {
                cout << "0";
            }
            else
            {
                cout << "1";
            }
        }
        cout << endl;
    }
    return 0;
}