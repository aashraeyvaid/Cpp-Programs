#include<iostream>
using namespace std;
int * fnx(int n)
{
    int *p;
    p=new int[n];
    return p;
}
int main()
{
    int *a=fnx(5);
    for(int i=0;i<5;i++)
    {
        a[i]=i;
        cout<<a[i]<<" ";
    }
    cout<<endl;
}