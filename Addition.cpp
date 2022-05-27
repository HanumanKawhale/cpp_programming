//program display addition of two number
#include<iostream>
using namespace std;

int Addition(int no1,int no2)
{
   int ans=0;
   ans=no1+no2;
   return ans;
}

int main()
{  
    int A=0, B=0, ret=0;
    
    cout<<"enter your first number:\n ";
    cin>>A;
    
    cout<<"enter your second number:\n";
    cin>>B;

    ret=Addition(A,B);
    cout<< "Your Addition is :" <<ret<<"\n";
    return 0;
}