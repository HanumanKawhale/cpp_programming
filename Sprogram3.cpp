#include<iostream>
using namespace std;

int Display(char *str) {
    
    int iCnt = 0;
    while(*str != '\0') {

        cout<<*str<<endl;
        str++;
        iCnt++;
    }
    return iCnt;

}

int main() {
    char Arr[20] ;
    int iRet = 0;

    cout<<"Enter String";
    cin.getline(Arr,20);
    

    iRet = Display(Arr);   //Display(100)

    cout<<"String length"<<iRet<<endl;

    
    return 0;
}
 