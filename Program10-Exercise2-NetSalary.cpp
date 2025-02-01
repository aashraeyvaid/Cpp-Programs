#include<iostream>
using namespace std;
int main()
{
	int bs,pa,pd,ns;
	cout<<"Enter the Basic Salary:- ";
	cin>>bs;
	cout<<"Enter the Percentage of Allowances:- ";
	cin>>pa;
	cout<<"Enter the Percentage of Deductions:- ";
	cin>>pd;
	ns=bs+bs*pa-bs*pd;
	cout<<"The Net Salary is "<<ns<<endl;
	return 0;
}
