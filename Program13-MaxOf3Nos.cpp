#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 3 numbers:- ";
	cin>>a>>b>>c;
	if(a>b and a>c)
	{
		cout<<"The Greatest Number is "<<a;
	}
	else
	{
		if(b>c)
		{
			cout<<"The Greatest Number is "<<b;
		}
		else
		{
			cout<<"The Greatest Number is "<<c;
		}
	}
	return 0;
}
