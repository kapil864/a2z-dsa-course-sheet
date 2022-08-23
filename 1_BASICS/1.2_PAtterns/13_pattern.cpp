/* 

    Print the pattern

    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15

*/

#include<iostream>
using namespace std;

int main(){
    int n =5;
    int numbersCount = (n * (n + 1)) / 2;
    int no = 1;
    for( int i = 0 ; i<n; i++){
        
        int j = 0;
        while(j<=i && no <= numbersCount){
            cout<<no<<" ";
            j++;
            no++;
        }
        cout<<endl;
    }
    return 0;
}