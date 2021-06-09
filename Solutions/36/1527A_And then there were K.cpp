#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int T,n,i;
    long  s;
    cin>>T;
    while(T--)
    {
        cin>>n;
        s=1;
        while(s*2<=n) s*=2;
        cout<<s-1<<'\n';
    }
 
    return 0;
}
