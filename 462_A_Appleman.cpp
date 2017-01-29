#include <bits/stdc++.h>
using namespace std;

int main()
{	
	char a[1000][1000];
	int i,j,n,count_o=0,count_x=0;

	cin>>n;
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n;j++)
	  {
		cin>>a[i][j];
	   }
	}
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n;j++)
	  {
		if(a[i][j]=='o')
		   count_o++;
		else if(a[i][j]=='x')
		   count_x++;
		else 
		   break;
	   }
		
	 }
	 
	 if(count_x==(count_o) || count_x==(count_o)*2 || count_x==1 ||count_o==1)
	 {
		 if(count_o == 1 && count_x == 1)
			cout<<"YES";
	 }
	 else
		   cout<<"NO";
	return 0;
}



