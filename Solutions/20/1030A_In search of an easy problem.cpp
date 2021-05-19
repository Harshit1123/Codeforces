#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,s=0;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; i++) {
      cin>>a[i];
  }
  for (int j = 0; j < n; j++) {
      if(a[j]==1)
      s++;
  }
  if(s>0)
  cout<<"HARD";
  else
  cout<<"EASY";
   
    
    
    return 0;
}
