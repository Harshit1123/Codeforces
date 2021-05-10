#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,arr[26]={0};
 string s;
 cin>>n>>s;
 if(n<26) cout<<"NO";
 else{
	 for(i=0;i<s.size();i++)
		 s[i]=tolower(s[i]);
	 for(i=0;i<s.size();i++)
		 arr[s[i]-97]++;
	 for(i=0;i<26;i++)
		 if(!arr[i])
		 {
			 cout<<"NO";
			 return 0;
		 }
	 cout<<"YES";
 }
  return 0;
 }
