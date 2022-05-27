//program to learn Default Argument PI=3.14 value and Display area of circle
#include<iostream>
using namespace std;

float Area(float fRadius,float PI=3.14)
{
float fAns=0.0;
fAns=PI*fRadius*fRadius;
return fAns;
}

int main()
{
    float fRet=0.0;
    int Radius=0;
    
   cout<<"Enter your Radius:";
   cin>>Radius;
   

    fRet=Area(Radius);
    cout<<"Your Area is : "<<fRet<<"\n";

    return 0;

}