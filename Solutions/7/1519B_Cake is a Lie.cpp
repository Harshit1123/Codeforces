#include<bits/stdc++.h>
using namespace std;

int main(){
int t,n,m,k;
int p=0,r=0;
int i=1, j=1;
int s;

 cin>>t;
while(t--){
cin>>n>>m>>k;
s=max(n,m);
while (s--){
        if (i!=n){
            i++;
            p+=j;
        }
        if (j!=m){
            j++;
            r+=i;
        }
        if (i==n && j==m && (p+r==k)){
            cout<<"YES"<<endl;
            break;
        }
        else if(i==n && j==m && (p+r!=k)){
                cout<<"NO"<<endl;
                break;
        }
};
p=0;
r=0;
i=1;
j=1;
};

return 0;
}
