#include<iostream>
using namespace std;

int main() {
    
    //initialising array
    int arr[] = {1,2,3};
    int n = 3;
    for(int i=0;i<n; i++) {
        cout << arr[i] << " ";

    }
    cout << endl;
    //
    int brr[7] = {1,2,3,4};
    
    n = 7;
    for(int i=0;i<n; i++) {

    cout << brr[i] << " ";
    }
    
    cout << endl; 
    //
    int crr[11] = {0};
    n = 11;
    for(int i=0;i<n;i++) {
        cout << crr[i] << " ";
    }
    cout << endl;

    //array size
    cout << "size array " << sizeof(crr) << endl;
}