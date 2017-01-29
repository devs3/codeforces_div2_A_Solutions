#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	long long int a[10^n],res,begin;
	begin=10^(n-1);
	cout<<begin<<endl;
	res=(10^n)-1;
	cout<<res;
	for(int i=begin;i<res;i++)
	{
		a[i]=i;
		cout<<a[i];
		/*if(a[i]%t==0)
		{
		   cout<<a[i];
		}
		else
			cout<<"-1";*/
	}
	
	return 0;
}
