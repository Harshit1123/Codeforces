#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,p=0;
string s;
cin>>t;
while(t--){
cin>>n;      
cin>>s;      
for (int i = 0; i < n; i++) {
if(s[i]==s[i+1])
continue;
else{
    for (int j = i+1; j < n; j++) {
        if(s[i]==s[j]){
            cout<<"NO"<<endl;
            p++;
            break;
        }
        if(p>0)
        break;
    }
}
 
    
}
if(p<1)
cout<<"YES"<<endl;
p=0;
};
 
return 0;
}
