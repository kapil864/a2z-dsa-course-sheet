#include <iostream>
using namespace std;

int main()
{
    int n, tempN;
    cin >> n;
    tempN = n;
    int rev = 0;
    while (n > 0)
    {
        int rem = n % 10;
        rev *= 10;
        rev += rem;
        n /= 10;
    }
    if(rev==tempN)
        cout<<"Number is a palindrome number";
    else 
        cout<<"Not a palindorome number";
    return 0;
}