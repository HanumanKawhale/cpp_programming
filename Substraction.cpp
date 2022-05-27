//This Program Display Substraction of two number
#include<iostream>
using namespace std;

int Substraction(int No1,int No2){
    int ans=0;
    ans=No1-No2;
    return ans;

}

int main(){
    
     int No1=0 ,No2=0, Ret=0;

     cout<<"Enter Your First Number:\n ";
     cin>>No1;

     cout<<"Enter Your Second Number:\n ";
     cin>>No2;

     Ret=Substraction(No1,No2);
     cout<<"Your Substraction is:"<<Ret<<"\n";

     return 0;

}