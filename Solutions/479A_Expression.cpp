#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,c,b,x,y,z,w,u;
    cin>>a>>b>>c;
    x=a+b*c ;
    y=a*(b+c);
    z=a*b*c;
    w=(a+b)*c;
    u=a+b+c;
  if(x>y && x>z && x>w && x>u)
  cout<<x;
  if(y>=x && y>=z && y>=w && y>=u)
  cout<<y;
  if(z>y && z>x && z>w && z>u)
  cout<<z;
  if(w>y && w>x && w>z && w>u)
  cout<<w;
  if(u>x && u>y && u>z && u>w)
  cout<<u;
    
    return 0;
}
