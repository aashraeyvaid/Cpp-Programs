#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"Enter any number:- ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"The sum is "<<sum;
	return 0;
}
