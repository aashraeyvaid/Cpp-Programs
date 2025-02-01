#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter any number:- ";
	cin>>n;
	{
		int a=n,b;
		while(true)
		{
			b=a%10;
			a=a/10;
			cout<<b<<endl;
			if(a==0)
			{
				break;
			}
		}
	}
	return 0;
}
