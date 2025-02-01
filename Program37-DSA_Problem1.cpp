#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N,X;
	    cin>>N>>X;
	    if((N>=1 && N<=100) && (X>=1 && X<=1000))
	    {
	        if(N%6==0)
	        {
	            cout<<(N/6)*X<<endl;
	        }
	        else
	        {
	            cout<<(((int)(N/6))+1)*X<<endl;
	        }
	    }
	}
}