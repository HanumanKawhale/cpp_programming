/*

input : 4
output 
7
*
* *
* * *
* * * *
 
*/

#include<iostream>
using namespace std;

int main() {
    
    int n = 0;
    cout << "enter number  " << endl;
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j =1; j<=i;j++ ) {
            cout << "* " ;
        }
        cout << endl;
    }
}