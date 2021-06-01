#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
string s;
cin>>s;
   string p="hello";
    int j=0;
    for (int i = 0; i < s.size(); i++) {
        /* code */
        if(s[i]==p[j]){
            j++;
        }
        if(j==5){
            break;
        }
 
    }
    if(j==5){
        cout<<"YES"<<endl;
 
    }
    else cout<<"NO"<<endl;
    return 0;
}
