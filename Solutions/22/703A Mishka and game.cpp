#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,c;
  int s=0,p=0;
  cin>>n;
  while(n--){
   cin>>m>>c;
   
   if(m>c)
   s++;
   else if(c>m)
   p++;
   else{
   s++;
   p++;
   }
  };
  if(s>p)
  cout<<"Mishka";
  else if(p>s)
  cout<<"Chris";
  else 
  cout<<"Friendship is magic!^^";
  return 0;
}
