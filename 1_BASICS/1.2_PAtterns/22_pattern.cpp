/* Print the pattern

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/

#include<iostream>
using namespace std;

int main(){
    int n =4;
    for ( int i = n ; i >0 ; i--){
        for( int j = n; j>0; j--){
            cout<<max(i,j)<<" ";
        }
        for( int j = 2 ; j <= n ; j++)
        {
            cout << max(i, j) << " ";
        }
        cout<<endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            cout << max(i, j) << " ";
        }
        for (int j = 2; j <= n; j++)
        {
            cout << max(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}