//selection sort
#include<iostream> 
using namespace std;

int main() {

    int arr[6] = {5,3,7,2,4,9};
    int n = 6;

    for(int i=0;i<=n-1;i++) {
        int min = i;
        for(int j=i+1;j<=n;j++) {
            if(arr[j]<arr[min]) {
                int temp = arr[j];
                arr[j] = arr[min];
                arr[min] = temp;
            }
        }
        
    }
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
  

}