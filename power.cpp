#include<iostream>
using namespace std;

int power(int n) {

    //base case
    if(n == 0) {
        return 1;
    }

    int powr = power(n-1);     //recursive call
    int powr2 = 2 * power(n-1);

    return powr2;
}
int main() {

    int n = 0;
    
    cout << "enter number " << endl;
    cin >> n;

    int ans = power(n);
    
    cout << ans << endl;

    return 0;
}