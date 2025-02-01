#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"Enter any number:- ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count+=1;
		}
	}
	if(count==2)
	{
		cout<<"The number is a Prime Number."<<endl;
	}
	else
	{
		cout<<"The number is not a Prime Number."<<endl;
	}
	return 0;
}
