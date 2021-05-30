#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int a,b;
    cin>>a>>b;
    int s=a;
 
    while(a>=b){
 
        int r=a/b;
        s+=r;
        a=a%b;
        a=r+a;
 
    }
 
    cout<<s<<endl;
    return 0;
}
