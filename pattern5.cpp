/**
 input : 3

 output 
  1 2 3
  4 5 6 
  7 8 9
 * 
 */
  
 
#include<iostream>
using namespace std;

int main() {

    int n = 0;
    cout << "enter number " << endl;
    cin >> n;

    int i = 1;
    int count = 1;

    // using while loop
    
    while(i <= n) {

        int j = 1;
  
        while(j <= n) {
            cout <<  count  << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i++;
    }
    /*
   
   //using for loop
   for(i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cout << count  << " ";
            count = count + 1;

        }
        cout << endl;
   }
   */

}