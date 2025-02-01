#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your Age:- ";
	cin>>age;
	if(age>=12 and age<=55)
	{
		cout<<"You are young.";
	}
	else if(age<12)
	{
		cout<<"You are a kid buddy.";
	}
	else
	{
		cout<<"You are old.";
	}
	return 0;
}
