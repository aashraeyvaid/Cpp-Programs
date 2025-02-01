#include<iostream>
using namespace std;
int main()
{
	{
		int px=1,py=1,t;
		for(int i=1;i<=4;i++)
		{
			t=py;
			for(int j=1;j<=i;j++)
			{
				if(i%2==1)
				{
					cout<<px<<" ";
				}
				else
				{
					cout<<t<<" ";
				}
				t--;
				px++;
				if(j!=i)
				{
					cout<<"* ";
				}
			}
			py=py+i+1;
			cout<<endl;
		}
		return 0;
	}
}
