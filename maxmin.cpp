//find max number  
#include<iostream>
using namespace std;

int getMax(int num[], int n) {
    
    int max = 0;
    for(int i =0;i<n; i++) {
        if(num[i] > max) {
            max = num[i];
        }
    }
    return max;
}

int main() {

    int size = 0;
    cout << "enter size " << endl;
    cin >> size;
    int ans = 0;
    int num[50];
    
    for(int i=0; i<size ;i++) {
        cin >> num[i];
    }

    ans = getMax(num, size);
    cout << "max number " << ans << endl;

}