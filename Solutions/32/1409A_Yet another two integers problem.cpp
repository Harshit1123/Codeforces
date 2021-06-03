#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int t,a,b;
cin>>t;
while(t--){
    int s=0,c=0,p=0;
   cin>>a>>b;
   if(a<b){
    c=b-a;
    if(c%10!=0)
    p++;
    s=c/10;
    if(p>0)
    cout<<s+1<<endl;
    else
    cout<<s<<endl;
   }
   else if(a>b){
       c=a-b;
       if(c%10!=0)
         p++;
     s=c/10;
    if(p>0)
    cout<<s+1<<endl;
    else
    cout<<s<<endl;
       
   }
   else
   cout<<"0"<<endl;
   
};
    return 0;
}
