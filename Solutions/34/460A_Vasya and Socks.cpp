#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int m,n,c=0,s=0;
cin>>m>>n;
s=m;
while(m>=n){
     c=m/n;
        s+=c;
        m=m%n;
        m=c+m;
}
cout<<s;
    return 0;
}
