#include<iostream>
using namespace std;

int e(int x,int n)
{
    static int p=1,f=1;
    int r;
    if(n==0)
    return 1;
    r=e(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}

int e_horner(int x,int n)
{
    static int s=1;
    if(n==0)
    return s;
    s=1+x/n*s;
    return e(x,n-1);
}

int main()
{
    cout<<e(2,4)<<endl;
    cout<<e(2,4)<<endl;
}