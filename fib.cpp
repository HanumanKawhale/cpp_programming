// 
/*
input 3
output  0 1 1 2 3 5 
*/

#include<iostream>
using namespace std;

int main() {
    
    int n = 0;

    int a = 0;
    int b = 1;
    
    cout << "enter number " << endl;
    cin >> n;
    cout << a << " ";
    cout << b << " ";

    for(int i=0; i<=n; i++) {
        int n1 = a + b;
        cout << n1 << " ";
        a = b;
        b = n1;
    }
}