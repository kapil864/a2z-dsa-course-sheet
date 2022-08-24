/*

Print the patterns

    E
    D E
    C D E
    B C D E
    A B C D E

*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int ch = 'E';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(ch - i + j) << " ";
        }
        cout<<endl;
    }
    return 0;
}
