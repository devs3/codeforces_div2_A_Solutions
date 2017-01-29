#include<bits/stdc++.h>
using namespace std;

int removezero(int num)
{
		int zero;
		int ten=1,res=0;
		
		while(num)
		{
			zero=num%10;
			num/=10;
			if(zero)
			{
				res+=zero*ten;
				ten*=10;
		     }
		}
		
			return res;
			
	
	
	
}


int main()
{
	int a,b,c;
	cin>>a>>b;
	c=a+b;
	a=removezero(a);
	b=removezero(b);
	c=removezero(c);
	if(a+b==c)
		cout<<"YES";
	else
		cout<<"NO";
		
	return 0;	
}
