#include<iostream>
using namespace std;

bool checkPalindrome(char name [] ,int n) {

    int s=0;
    int e = n-1;
    
    while(s<e) {
        if(name[s] != name[e]) {
            return 0;
        }else{
            s++;
            e--;
        }
        return 1;
    }

}

int main() {

    char name [20];

    cin >> name ;
    
    cout << endl;
    int n =0;
    cin >> n;
    
    bool b = checkPalindrome(name,n);
    cout << b;
    return 0;   
}