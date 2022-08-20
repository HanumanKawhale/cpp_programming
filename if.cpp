#include<iostream>
using namespace std;

int main() {

    int n = 0;


    cout << "enter number :" << endl;
    cin >> n;

    if(n > 0) {
        cout << "positive number " << endl;
    }
    else if (n < 0) {
        cout << "negative number " << endl;
    }
    else {
        cout << "number 0 " << endl;
    }


    return 0;
}