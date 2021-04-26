#include<bits./stdc++.h>
using namespace std;
 
int main()
{
    string a[10000];
    int n, x=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int plius=0, minuss=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]=="++X" || a[i]=="+X+" || a[i]=="X++")
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout<<x<<endl;
}
