#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
   while(t--)
    {
        int a, b;
        cin>>a>>b;
        int ats;
        if(a%b!=0)
        {
            ats=b-a%b;
        }
        else
        {
            ats=0;
        }
        cout<<ats<<endl;
    };
    return 0;
}
