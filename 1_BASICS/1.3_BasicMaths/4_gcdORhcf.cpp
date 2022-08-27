#include <iostream>
using namespace std;

int gcdBrute(int m, int n)
{
    int ans;
    for (int i = 1; i <= min(m, n); i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}

int gcdEuclid(int a, int b){
    if (b == 0)
    {
        return a;
    }
    return gcdEuclid(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcdBrute(a, b);
    return 0;
}