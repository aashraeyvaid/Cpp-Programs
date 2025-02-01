#include<iostream>
using namespace std;
int main()
{
	int bill,disc,netbill;
	cout<<"Enter the total bill:- ";
	cin>>bill;
	if(bill<100)
	{
		disc=0;
		netbill=bill-disc;
		cout<<"The final bill is "<<netbill;
	}
	else if(bill>=100 and bill<500)
	{
		disc=((float)10/100)*bill;
		netbill=bill-disc;
		cout<<"The final bill is "<<netbill;
	}
	else if(bill>=500)
	{
		disc=((float)20/100)*bill;
		netbill=bill-disc;
		cout<<"The final bill is "<<netbill;
	}
	return 0;
}
