#include<iostream>
using namespace std;
void swap1(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b<<endl;
}
void swap2(int *a,int *b)
{
    *a=*a+(*b);
    *b=*a-(*b);
    *a=*a-(*b);
    cout<<*a<<" "<<*b<<endl;
}
void swap3(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int x=3,y=4;
    cout<<x<<" "<<y<<endl;
    swap1(x,y);
    swap2(&x,&y);
    swap3(x,y);
}