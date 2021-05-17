#include<bits/stdc++.h>
using namespace std;
int main(){
int n,s;
cin>>n>>s;
 
while(s>0){
  if(n%10==0)
   n=n/10;
  else
   n--;
   
   s--;
};
cout<<n;
return 0;
}
