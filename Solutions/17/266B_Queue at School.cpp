#include <bits/stdc++.h>
using namespace std;
string s1;
int main()
{
   int n,t;
    cin>>n>>t>>s1;
    for(int i=1;i<=t;i++){
        for(int j=0;j<n-1;j++){
            if(s1[j]=='B'&&s1[j+1]=='G'){ s1[j]='G'; s1[j+1]='B'; j++; }
        }
    }
    cout<<s1<<endl;
    
return 0;
}
