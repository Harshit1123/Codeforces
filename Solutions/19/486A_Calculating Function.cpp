#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  ll n,s=0,p=0,c,d;
    cin>>n;
     c=n/2;
    if(n%2==0){
    d=c-1;
    s=c*c;
    p=d*(d+1);
    }
    else
    {s=c*c;
    p=c*(c+1);
    }
    if(n%2==0)
    cout<<-s+p+n;
    else
    cout<<-s+p-n;
    s=0;
    p=0;
    return 0;
}
