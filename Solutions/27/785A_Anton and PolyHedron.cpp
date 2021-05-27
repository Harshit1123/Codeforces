#include<bits/stdc++.h>
using namespace std;
 
int main() {
 int t=4,p=0,c=6,o=8,d=12,i=20,n;
 string s;
    cin>>n;
    while(n--){
      cin>>s;
      if(s[0]=='I')
      p+=i;
      else if(s[0]=='C')
      p+=c;
      else if(s[0]=='O')
      p+=o;
      else if(s[0]=='D')
      p+=d;
      else if(s[0]=='T')
      p+=t;
    }
 
 cout<<p;
    return 0;
}
