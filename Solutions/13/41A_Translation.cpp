#include<bits/stdc++.h>
using namespace std;
int main(){
string s,t;    
int a=0;
cin>>s>>t;
if(s.size()==t.size()){
for (int i = 0; i < s.size(); i++) {
    if(s[i]==t[t.size()-1-i])
    a++;
}
if(a==s.size())
cout<<"YES";
else
cout<<"NO";
    
}
else
cout<<"NO";
 
    return 0;
}
 
