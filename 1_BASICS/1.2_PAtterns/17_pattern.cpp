/*

Print the pattern

       A
      ABA
     ABCBA
    ABCDBCA

*/

#include <iostream>
using namespace std;

int main()
{
    int ch = 'A';
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1-i; j >= 0; j--)
        {
            cout << " ";
        }

        for (int j = 0; j < i; j++)
        {
            cout << char(ch + j);
        }

        cout << char(ch + i);

        for (int j = i-1; j >= 0; j--)
        {
            cout << char(ch + j);
        }

        for (int j = n - 1-i; j >= 0; j--)
        {
            cout << " ";
        }
        cout<<endl;
    }
    return 0;
}