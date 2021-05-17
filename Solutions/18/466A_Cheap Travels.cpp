 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 unsigned long long n,m,a,b,x,y;
  cin>>n>>m>>a>>b;
  if((((n/m)*b)+((n%m)*a))<(((n/m)*b)+b))
	  x=((n/m)*b)+((n%m)*a);
  else x=((n/m)*b)+b;
  y=n*a;
  if(m>=n){
	if(n*a<b) cout<<n*a;
	else cout<<b;
  }
  else{	  if(x>y)
	  cout<<y;
  else cout<<x;
  }
   return 0;
}
