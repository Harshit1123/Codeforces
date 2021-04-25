#include<bits/stdc++.h>
using namespace std;

int main(){

string n;

cin>>n;

for (int i = 0; i < n.size(); i++) {
    if(n[i]=='a'||n[i]=='e'||n[i]=='i'||n[i]=='o'||n[i]=='u'||n[i]=='y'||n[i]=='A'||n[i]=='I'||n[i]=='E'||n[i]=='O'||n[i]=='U'||n[i]=='Y')
        continue;
    else if(isupper(n[i])){
       n[i]+=32;
       cout<<"."<<n[i];
    }
    else
     cout<<"."<<n[i];
}


return 0;
}
