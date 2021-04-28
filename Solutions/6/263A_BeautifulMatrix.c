#include<bits/stdc++.h>
using namespace std;
 
int main(){
int a[5][5];
int s;
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        cin>>a[i][j];
    }
}
for (int p = 0; p < 5; p++) {
    for (int k = 0; k < 5; k++) {
       if(a[p][k]==1)
        s=(abs(2-p))+(abs(2-k));
    }
}
 
cout<<s;
return 0;
}
