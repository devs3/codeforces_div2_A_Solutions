#include<bits/stdc++.h>
using namespace std;

char fun(char a,char b){
	
		if(a==b)
			return 0;
		else
			return 1;
	
	}


int main(){
		
		char str1[2000],str2[2000],out[2000],n;
		int i;
	
		cin>>str1>>str2;
		
		for(i=0;str1[i]!='\0';i++)
		{
			out[i]=fun(str1[i],str2[i]);
			
		}
	
		printf("%s",out);
	
	
	
	
}
