#include<iostream>
using namespace std;
int main()
{
	{
		int a=3,f=0;
		for(int i=1;i<=7;i++)
		{
			for(int j=3;j>=a;j--)
			{
				cout<<char(65+j)<<" ";
				if(a==0)
				{
					f=1;
				}
			}
			if(f!=1)
			{
				a--;
			}
			else
			{
				a++;
			}
			cout<<endl;
		}
	}
	return 0;
}
