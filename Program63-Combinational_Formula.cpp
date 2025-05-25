#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1)
    return 1;
    return n*fact(n-1);
}

int C(int n,int r)
{
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);
    return t1/(t2*t3);
}

int main()
{
    cout<<C(10,2)<<endl;
}