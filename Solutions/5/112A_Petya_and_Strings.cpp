#include<bits/stdc++.h>
using namespace std;
int main(){
 string s1,s2;
 int s=0;
 cin>>s1;
 cin>>s2;
 if(s1.size()<s2.size())
  cout<<"-1";
 else if(s1.size()==s2.size()){
 for (int i = 0; i < s1.size() ; i++) {
     if(isupper(s1[i]))
     s1[i]+=32;
     if(isupper (s2[i]))
     s2[i]+=32;
     if(s1[i]==s2[i])
      s++;
     else if(s1[i]<s2[i]){
      cout<<"-1";
       break;
     }
     else{
      cout<<"1";
      break;
     }
 }
 if(s==s1.size())
  cout<<"0";
 }
 else
   cout<<"1";
return 0;    
}
