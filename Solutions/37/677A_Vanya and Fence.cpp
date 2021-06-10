
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
int n,h,p=0;
cin>>n>>h;
int s[n];
for (int i = 0; i < n; i++) {
    cin>>s[i];
}
for (int j = 0; j < n; j++) {
    if(s[j]>h)
     p+=2;
    else
     p++;
}
cout<<p;
 
    return 0;
}
