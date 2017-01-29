#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k,r,count=1;
	cin>>k>>r;
	
	while(1)
	{	
		if((k*count)%10==0 || (k*count)%10==r)
		{
			cout<<count;
			return 0;
		}
		count++;
	}
	
	return 0;
}
