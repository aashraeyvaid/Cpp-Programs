#include<iostream>
using namespace std;
int binary(int arr[],int t,int n)
{
    int mid,b=0,e=n-1;
    while(b<=e)
    {
        mid=(b+e)/2;
        if(arr[mid]==t)
        {
            return mid+1;
        }
        else if(t>arr[mid])
        {
            b=mid+1;
        }
        else{
            e=mid-1;
        }
    }
}
int main()
{
    int arr[]={1,3,4,5,6,9,12};
    cout<<binary(arr,6,7)<<endl;
}