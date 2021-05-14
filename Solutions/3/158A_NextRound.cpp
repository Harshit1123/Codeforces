#include <bits/stdc++.h>
using namespace std;
 
int a[101];
int n,l,k;
 
int main()
{ 
cin>>n>>k;
for(int i=0;i<n;i++)
cin>>a[i];
 
int scr=a[k-1];
for(int i=0;i<n;i++)
    if(a[i]>=scr&&a[i]!=0)l++;
  cout<<l;
 }  
