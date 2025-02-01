#include<iostream>
using namespace std;
int main()
{
	{
		int a=0,b=1;
		for(int i=1;i<=5;i++)
		{
			for(int j=1;j<=a;j++)
			{
				cout<<"_";
			}
			cout<<"*";
			if(i==1)
			{
				for(int k=1;k<9;k++)
				{
					cout<<"*";
				}
			}
			else
			{
				for(int l=5;l>=b;l--)
				{
					cout<<"_";
				}
				if(i!=5)
				{
					cout<<"*";
				}
				b+=2;
			}
			for(int j=1;j<=a;j++)
			{
				cout<<"_";
			}
			a++;
			cout<<endl;
		}
	}
	return 0;
}
