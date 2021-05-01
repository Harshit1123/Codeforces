#include<bits/stdc++.h>
using namespace std;
int main(){
int t=0; 
int p=0;
string n;
cin>>n;
for (int i = 0; i < n.size(); i++) {
    if(n[i]==n[i+1]){
     t++;
     if(t>=6){
cout<<"YES";
break;}
 
    }
    else{
     p++;
     t=0;
    }
}
 if(t<6){
cout<<"NO";
}
return 0;
}
