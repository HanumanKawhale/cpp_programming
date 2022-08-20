#include<iostream>
using namespace std;

int main() {

    int n = 4;
   int number=1;

    for(int row=1;row<=n;row++) {


        for( int col=1;col<=n;col++) {
            cout <<  number << " ";
            number =number+1;
              
        }
        cout << endl;


    }
    
}