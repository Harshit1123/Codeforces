#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 
ll n,r,s=0;
 cin>>n;
 
 while(n!=0){
   r=n%10;
   if(r==4 || r==7)
   s++;
   n/=10; 
   }
if(s==4 || s==7)
cout<<"YES";
else
cout<<"NO";
    return 0;
}
