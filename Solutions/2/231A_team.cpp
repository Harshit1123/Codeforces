#include <bits/stdc++.h>
using namespace std;
int main() {
 int n,s=0,p=0;;
cin>>n;
 int a[3];
 while(n--){
 for (int i = 0; i < 3; i++) {
   cin>>a[i];
 }

 for (int j = 0; j < 3; j++) {
    if(a[j]==1)
        s++;
 }
 if(s>1)
    p++;
    
 s=0;    
 };
 cout<<p;

return 0;
}
