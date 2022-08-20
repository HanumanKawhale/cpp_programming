/*
input : 4
output

4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1

*/

#include<iostream>
using namespace std;

int main() {

    int n = 0;
    cout << "enter number " << endl;
    cin >> n;
    //using for loop
    int i = 0;
    for(i=1; i<=n; i++) {

        for(int j=n; j>=1; j--) {
            cout <<  j << " ";

        }
        cout << endl;
    }
}   