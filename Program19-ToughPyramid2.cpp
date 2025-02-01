#include<iostream>
using namespace std;
int main()
{
	{
		int x=0,y=2;
		for(int i=1;i<=5;i++)
		{
			for(int j=4;j>x;j--)
			{
				cout<<" ";
			}
			for(int k=1;k<y;k++)
			{
				cout<<"* ";
			}
			for(int j=3;j>x;j--)
			{
				cout<<" ";
			}
			x++;
			y++;
			cout<<endl;
		}
	}
	return 0;
}
