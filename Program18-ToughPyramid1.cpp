#include<iostream>
using namespace std;
int main()
{
	{
		int a=0,b=1;
		for(int i=1;i<=4;i++)
		{
			for(int j=3;j>a;j--)
			{
				cout<<" ";
			}
			for(int k=1;k<=b;k++)
			{
				cout<<"*";
			}
			a++;
			b++;
			cout<<endl;
		}
	}
	return 0;
}
