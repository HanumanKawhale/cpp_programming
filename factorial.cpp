#include<iostream>
using namespace std;

int factorial(int n) {

    //base case
    if(n == 0) {
        return 1;
    }                                                       

    int fact = factorial(n-1);      //recursive call
    int fact2 = n * fact;

    return fact2;
}
int main() {

    int n = 0;
    cout << "enter number " << endl;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}