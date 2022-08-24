/*

Print the pattern

    *        *
    **      **
    ***    ***
    ****  ****
    **********
    ****  ****
    ***    ***
    **      **
    *        *
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        for (int j = n - 2 - i; j >= 0; j--)
        {
            cout << " ";
        }
        for (int j = n - 2 - i; j >= 0; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        cout<<endl;
    }
    for (int i = n-2; i >=0 ; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        for (int j = n - 2 - i; j >= 0; j--)
        {
            cout << " ";
        }
        for (int j = n - 2 - i; j >= 0; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
