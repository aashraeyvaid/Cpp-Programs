#include<iostream>
using namespace std;
void del(int arr[],int n)
{
    for(int i=n-2;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int a[5]={1,2,3,4,5};
    del(a,5);
}