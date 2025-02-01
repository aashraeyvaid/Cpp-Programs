#include<iostream>
using namespace std;
int main()
{
	int n,pro=1;
	cout<<"Enter any number:- ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		pro*=i;
	}
	cout<<"The factorial value is "<<pro<<endl;
	return 0;
}
