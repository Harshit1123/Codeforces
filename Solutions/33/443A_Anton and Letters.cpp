 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
string s;
getline(cin,s);
int a[128] = { 0 };
	int i, c = 0;
if(s.size()>2){
	for (i = 1; i < s.size(); i+=3) {
		a[s[i]] = 1;
	}
 
 
	for (i = 0; i < 128; ++i) {
		c += a[i];
	}
 
 
cout <<c;
}
else
cout<<"0";
    return 0;
}
