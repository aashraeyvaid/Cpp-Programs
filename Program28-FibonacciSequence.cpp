#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=1;
	cout<<"Enter the term number till where you wanna see the fibonacci sequence:- ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<a<<endl<<b<<endl;
		a=a+b;
		b=a+b;
	}
	return 0;
}
