#include<bits/stdc++.h>
using namespace std;

int main(){
	
		int a[200],m,n,count=0,i;
		cin>>n>>m;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		
		for(i=0;i<n;i++)
			if(a[i]<m){
					if((m%a[i]==a[i+1])) i++,count++;	
					else if(m%a[i]<a[i+1]) i++;
					else count++;
				}
			else if(a[i]==m) count++;
			else break;
				
			cout<<count;	
	
}
