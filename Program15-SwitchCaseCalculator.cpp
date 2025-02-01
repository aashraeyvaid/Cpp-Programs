#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"1- Addition\n"
		<<"2- Subtraction\n"
		<<"3- Multiplication\n"
		<<"4- Division\n"
		<<"Enter the index number for the desired operation:- ";
	cin>>a;
	if(a==1 or a==2 or a==3 or a==4)
	{
		float n1,n2,op;
		cout<<"Enter 1st number:- ";
		cin>>n1;
		cout<<"Enter 2nd number:- ";
		cin>>n2;
		switch(a)
		{
			case 1:
				op=n1+n2;
				cout<<op<<endl;
				break;
			case 2:
				op=n1-n2;
				cout<<op<<endl;
				break;
			case 3:
				op=n1*n2;
				cout<<op<<endl;
				break;
			case 4:
				if(n2==0)
				{
					cout<<"Division by zero cannot be performed!!!";
					break;
				}
				else
				{
					op=(float)n1/n2;
					cout<<op<<endl;
					break;
				}
		}
	}
	else
	{
		cout<<"Invalid Input!!!"<<endl;
	}
	return 0;
}
