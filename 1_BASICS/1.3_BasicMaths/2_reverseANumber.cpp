#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rev = 0;
    while (n > 0)
    {
        int rem = n % 10;
        rev *= 10;
        rev += rem;
        n /= 10;
    }
    cout<<rev;
    return 0;
}