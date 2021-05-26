#include<bits/stdc++.h>
using namespace std;
 
int main() {
 int n,t=0,p=0;
 string s;
 cin>>n;
 cin>>s;
 for (int i = 0; i < s.size(); i++) {
     if(s[i]=='A')
     p++;
     else if(s[i]=='D')
     t++;
 }
 
 if(p>t)
 cout<<"Anton";
 else if(t>p)
 cout<<"Danik";
 else if(t==p)
 cout<<"Friendship";
 
    return 0;
}
