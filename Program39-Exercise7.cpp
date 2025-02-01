#include<iostream>
using namespace std;
int main()
{
    int m,n,o,p;
    cout<<"Enter the rows and columns of 1st matrix:- ";
    cin>>m>>n;
    cout<<"Enter the rows and columns of 2nd matrix:- ";
    cin>>o>>p;
    int a[m][n],b[o][p],c[m][p];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the value:- ";
            cin>>a[i][j];
        }
    }
    for(int i=0;i<o;i++)
    {
        for(int j=0;j<p;j++)
        {
            cout<<"Enter the value:- ";
            cin>>b[i][j];
        }
    }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<o;i++)
        {
            for(int j=0;j<p;j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        {
            c[i][j]=0;
        }
    }
    if(n==o)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<p;j++)
            {
                for(int k=0;k<p;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<p;j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    cout<<"Not Possible!!!";

}