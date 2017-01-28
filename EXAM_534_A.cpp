#include<bits/stdc++.h>
using namespace std;


int main(){
	int a[1000000],n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i]=a[i]+(i+1);
    }
    
	if(n%2==0)
	{
	    for(i=0;i<n;i++)
		{
			swap(a[2*i],a[n-2*i]);			
		}
		swap(a[n/2-1],a[n/2+1]);
	}
	else
	{
		for(i=0;i<n;i++)
		{
			swap(a[2*i],a[n-2*i]);
		}
		
	}	
		
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;

}
	
