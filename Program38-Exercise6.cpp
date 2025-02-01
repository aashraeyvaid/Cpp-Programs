#include<iostream>
using namespace std;
int main()
{
    int a[100][100];
    float sum=0.0;
    int m,n;
    cout<<"Enter the numebr of rows:- ";
    cin>>m;
    cout<<"Enter the number of columns:- ";
    cin>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter value:- ";
            cin>>a[i][j];
            sum+=a[i][j];
        }
    }
    cout<<"The average is:- "<<sum/(m*n);
}