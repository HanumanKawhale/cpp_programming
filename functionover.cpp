//This program is Concept of function over loading 
#include<iostream>

using namespace std;

class demo
{
    public:

    int Addition(int no1,int no2)  //first function
    {
        int ans=0;
        ans=no1+no2;
        return ans;
    }
    int Addition(int no1,int no2,int no3) //second function
    {
        int ans=0;
        ans=no1+no2+no3;
        return ans;
    }
    int Addition(int no1,int no2,int no3,int no4) //third function
    {
        int ans=0;
        ans=no1+no2+no3+no4;
        return ans;
    }
};

int main()
{
    demo obj;
    int ret=0;

    ret=obj.Addition(10,11);
    cout<<ret<<"\n";

    ret=obj.Addition(10,11,21);
    cout<<ret<<"\n";

    ret=obj.Addition(10,11,21,51);
    cout<<ret<<"\n";

    return 0;
}