#include<iostream>
using namespace std;
int main()
{
	{
		int a=0,b=1,c=1;
		for(int i=1;i<=5;i++)
		{
			for(int j=1;j<=b;j++)
			{
				cout<<char(65+a)<<" ";
			}
			for(int k=4;k>=c;k--)
			{
				cout<<"* ";
			}
			a++;
			b++;
			c++;
			cout<<endl;
		}
		return 0;
	}
}
