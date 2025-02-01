#include<iostream>
using namespace std;
int main()
{
	int m,n,x,y,dif;
	cout<<"Enter the first numebr:- ";
	cin>>m;
	cout<<"Enter the second number:- ";
	cin>>n;
	x=m;
	y=n;
	if(x>y)
	{
		dif=x-y;
		while(dif!=y)
		{
			if(dif>y)
			{
				dif=dif-y;
			}
			else
			{
				y=y-dif;
			}
		}
	}
	else
	{
		dif=y-x;;
		while(dif!=x)
		{
			if(dif>x)
			{
				dif=dif-x;
			}
			else
			{
				x=x-dif;
			}
		}
	}
	cout<<"The HCF is "<<dif<<endl;
	return 0;
}
