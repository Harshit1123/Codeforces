#include<bits/stdc++.h>
using namespace std;
  
string sortString(string &str)
{
   sort(str.begin(), str.end());
   return str;
}
  
int main()
{
string a,b,c,d;
int s=0;
cin>>a>>b>>c;
d=a+b;
    sortString(d); 
    sortString(c);
    if(c.size()==d.size()){
    for (int i = 0; i < c.size(); i++) {
        if(c[i]==d[i])
        s++;
        }
    if(s==c.size())
    cout<<"YES";
    else
    cout<<"NO";
    }
    else 
    cout<<"NO";
    return 0;
}
