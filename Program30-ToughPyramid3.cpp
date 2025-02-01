#include<iostream>
using namespace std;
int main()
{
	{
		int a=2,b=1;
		for(int i=1;i<=3;i++)
		{
			for(int j=1;j<=a;j++)
			{
				cout<<" ";
			}
			for(int k=1;k<=b;k++)
			{
				cout<<"*";
			}
			for(int l=1;l<=a;l++)
			{
				cout<<" ";
			}
			a--;
			b+=2;
			cout<<endl;
		}
		for(int i=1;i<=2;i++)
		{
			for(int j=-1;j>=a;j--)
			{
				cout<<" ";
			}
			for(int k=5;k<=b;k++)
			{
				cout<<"*";
			}
			for(int j=-1;j>=a;j--)
			{
				cout<<" ";
			}
			a--;
			b-=2;
			cout<<endl;
		}
	}
	return 0;
}
