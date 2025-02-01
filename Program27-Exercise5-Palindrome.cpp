#include<iostream>
using namespace std;
int main()
{
	int n,r,digit,rev=0;
	cout<<"Enter any number:- ";
	cin>>n;
	r=n;
	while(r!=0)
	{
		digit=r%10;
		rev=(rev*10)+digit;
		r=r/10;
	}
	cout<<rev<<endl;
	if(rev==n)
	{
		cout<<"The number is a palindrome."<<endl;
	}
	else
	{
		cout<<"The number is not a palindrome."<<endl;
	}
	return 0;
}
