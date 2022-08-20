#include<iostream> 
using namespace std;

int main() {

    int n  = 0;
    cout << "enter number " << endl;
    cin >> n;

    for(int i =1; i<=n ; i++) {

        if(n % 2 == 0) {
            cout << " even number " << endl;
            break;
        }
        else {
            cout << " odd number " << endl;
            break;
        }
    }
}