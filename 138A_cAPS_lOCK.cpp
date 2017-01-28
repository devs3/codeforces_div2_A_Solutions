#include<bits/stdc++.h>
using namespace std;

int main(){
		int i=0;
		string s;
		cin>>s;
		int size=s.size();
        char d=s[0];
		s[0]=toupper(d);
        for(i=1;i<size;i++)
        {
          char c=s[i];
          s[i]=tolower(c);

        }


		cout<<s;



}
