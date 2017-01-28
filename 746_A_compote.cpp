#include <bits/stdc++.h>
using namespace std;

int main(){

      int a,b,c,temp=0;
      cin>>a>>b>>c;
      int resb=floor(b/2);
      int resc=floor(c/4);
      while(a && resb && resc){
			a--;resb--;resc--;temp++;
	  }
	  cout<<temp*7;

}
