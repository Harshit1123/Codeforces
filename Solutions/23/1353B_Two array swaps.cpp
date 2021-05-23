#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while (t--){
     cin>>n>>k;
     int a1[n];
     int a2[n];
     for (int i = 0; i < n; i++) {
         cin>>a1[i];
     }
      for (int i = 0; i < n; i++) {
         cin>>a2[i];
     }
     
     sort(a1,a1+n);
     sort(a2,a2+n);
     int j=0,tmp;
     while(k--){
         if(a1[j]<=a2[n-j-1]){
         tmp=a1[j];
         a1[j]=a2[n-j-1];
         a2[n-1-j]=tmp;
         j++;
             
         }
         else
          break;
     }
     int s=0;
     for (int p = 0; p < n; p++) {
         s+=a1[p];
     }
     
     cout<<s<<endl;
    };
return 0;
}
