#include<iostream>
using namespace std;
int main()
{
	int A[5]={2,4,6,8,10};
	int sum=0;
	for(int i=0;i<sizeof(A);i++)
	{
		cout<<A[i]<<endl;
		sum+=A[i];
	}
	cout<<A<<" "<<sizeof(A)<<endl;
	cout<<"The sum ofthe array elements is "<<sum;
}
