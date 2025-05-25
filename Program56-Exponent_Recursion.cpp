#include<iostream>
using namespace std;
int exp1(int m,int n)                    //Time Complexxity is more
{
    if(n>1)
    return m*exp1(m,n-1);
    return m;
}
int exp2(int m,int n)                   //Time Complexity is less
{
    if(n>1)
    {
        if(n%2==0)
        return exp2(m*m,n/2);
        return m*exp2(m*m,(n-1)/2);
    }
    return m;
}
int main()
{
    cout<<exp1(2,3)<<endl;
    cout<<exp2(4,3)<<endl;
}