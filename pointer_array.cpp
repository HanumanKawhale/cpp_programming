#include<iostream>
using namespace std;

int main() {

    int arr[10] = {1,8,3,4,5,6,7,8,9,0};

    cout << "address of arr " << arr << endl;
    cout << "address of arr " << &arr[0] << endl;

    cout << *arr << endl;
    cout << *arr+5 <<endl;
    cout << *(arr+1) << endl;

    return 0;
}