#include<bits/stdc++.h>
using namespace std;
 
int main() {
 int t,r,p=0,s=0;
 cin>>t;
 int n=t;
 while(t!=0){
     r=t%10;
     if(r==4 || r==7)
        s++;
        
    p++;    
     t=t/10;
 }
if(s==p)
cout<<"YES";
else if(n%4==0 || n%7==0 || n%47==0)
cout<<"YES";
else cout<<"NO";
 
    return 0;
}
