#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long T; cin >> T;
   while(T--) {
     int N;
       cin>>N;
       cout << 100 / __gcd(100, N) << endl;
    };
    return 0;
}
