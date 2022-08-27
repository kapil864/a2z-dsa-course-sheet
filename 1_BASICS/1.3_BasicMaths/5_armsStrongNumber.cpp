// ArmsStrong number : Number having sum of it's digits raised to power no of digits
//     equal to given number

// Seconds become a Minute
// Minutes become a Hour
// Hours become a Day
// Days become Month
// Months become a Year
// And Years passby
// But memories last

// #parmaru #hostellife
// #mits #farewell

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int tempN = n, sum =0, noDigits =0;
    cout<<tempN<<endl;
    
    while (n != 0)
    {
        noDigits++;
        n/=10;
    }

    n = tempN;
    cout<<n<<endl;

    while (n != 0)
    {
        int digit = n%10;
        sum += pow(digit,noDigits);
        n/=10;

    }
    cout << tempN << endl;
    cout<<sum<<endl;

    if(sum==tempN){
        cout<<"Number is a armstrong number";
    }
    else{
        cout<<"Number is not a armstrong number";
    }
    return 0;
     
}