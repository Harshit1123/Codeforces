#include<bits/stdc++.h>
using namespace std;
int main(){
int t; 
int p=0;
cin>>t;
string n;
cin>>n;
for (int i = 0; i < t; i++) {
    if(n[i]==n[i+1])
        p++;
}
cout<<p;
return 0;
}
