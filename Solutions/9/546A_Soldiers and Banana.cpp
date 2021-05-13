#include<bits/stdc++.h>
using namespace std;
int main(){
int k,n,w; 
int p=0,a=0;
cin>>k>>n>>w;
for (int i = 1; i <= w; i++) {
    p=i*k;
    a+=p;
}
if(a>n)
cout<<a-n;
else
cout<<0;
 
return 0;
}
