/* 
Print the pattern

ABCDE
ABCD
ABC
AB
A

*/

#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int a = 'A';
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(a + j);
        }
        cout << endl;
    }
    return 0;
}