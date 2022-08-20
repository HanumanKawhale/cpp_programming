/*
input : 4
output 
* * * *
* * *
* *
*
*/

#include<iostream>
using namespace std;

int main() {
    
    int n = 1;
    cout << "enter number  " << endl;
    cin >> n;

    for(int i =n;i>=1;i--) {
        for(int j=1;j<=i; j++) {
            cout << " * ";
        }
        cout << endl;
    }
}
  