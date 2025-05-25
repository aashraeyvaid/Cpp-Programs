#include<iostream>
using namespace std;
void Insertion_Sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && curr<arr[prev])
        {
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Bubble_Sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Selection_Sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }
        arr[i]=arr[i]+arr[min];
        arr[min]=arr[i]-arr[min];
        arr[i]=arr[i]-arr[min];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[]={9,6,8,3,5,10,18};
    Selection_Sort(arr,7);
    Insertion_Sort(arr,7);
    Bubble_Sort(arr,7);
}