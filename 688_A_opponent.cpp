#include<bits/stdc++.h>
using namespace std;


int main(){
		int n,m,count=0,arr[200][200],temp[200],res[200],j=0;
		cin>>m>>n;
		
		
		for(int i=0;i<n;i++){
			for(int j=0;i<m;j++){
				cin>>arr[i][j];
				if(arr[i][j]==0){
					res[i]=1;
					cout<<"in 1";
				}
				else
					res[i]=0;
					cout<<"in 0";
				}
        }				
        for(int i=0;i<n;i++){
			if(res[i] == 1){
				count++;
				temp[j]=0;
				j++;
			}
			else
			{
				temp[j]=count;
				j++;
				count=0;
			}
		}
        
}
