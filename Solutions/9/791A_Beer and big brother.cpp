#include<bits/stdc++.h>
using namespace std

int main(){
int a,b,d=0;
cin>>a>>b;
while(a<=b){
    a=a*3;
    b=b*2;
    d++;
}
cout<<d;
return 0;
}
