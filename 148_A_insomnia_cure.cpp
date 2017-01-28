#include<bits/stdc++.h>
using namespace std;

int main(){

        int i,j,k,l,d,m,count=0;
        cin>>m>>j>>k>>l>>d;
        for(i=1;i<=d;i++){
            if(i%j==0 || i%k==0 || i%l==0 || i%m==0)
          {
            count++;
          }
        }
        cout<<count<<endl;

        return 0;



}
