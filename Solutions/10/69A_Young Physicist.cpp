#include<bits/stdc++.h>
using namespace std;
int main(){
int n,d=0,s=0;
cin>>n;
int a[n][3];
for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
        cin>>a[i][j];
    }
}
for (int k = 0; k < 3; k++) {
    for (int p = 0; p < n; p++) {
        d+=a[p][k];
    }
    if(d==0){
     s++;
    continue;}
    else
    break;
}
 if(s==3)
cout<<"YES";
 else
 cout<<"NO";
 
return 0;
}
