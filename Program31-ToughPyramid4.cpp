#include<iostream>
using namespace std;
int main()
{
	{
		int a=0,b=1,c=0,d=0;
		for(int i=1;i<=4;i++)
		{
			for(int j=3;j>a;j--)
			{
				cout<<" ";
			}
			for(int k=1;k<=b;k++)
			{
				cout<<k;
			}
			for(int l=c;l>d;l--)
			{
				if(l==0)
				{
					break;
				}
				cout<<l;
			}
			for(int j=3;j>a;j--)
			{
				cout<<" ";
			}
			a++;
			b++;
			c++;
			d--;
			cout<<endl;
		}
	}
	return 0;
}
