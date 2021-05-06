#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define rall(v) v.rbegin(),v.rend()
#define do_not_disturb ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

 
const int mod = 1e9+7;
 
int main() {
    do_not_disturb
    
    int t;
    cin >> t;
    vector <int> v;
    for (int i = 1; i <= 9; i++) {
        int res = i;
        while (1) {
            v.pb(res);
            if (res >= 1e8) break;
            res = res*10+i;
        }
    }
    sort(all(v));
    while (t--) {
        int n;
        cin >> n;
        auto it = ub(all(v), n)-v.begin();
        cout << it << endl;
    }
    
    return 0;
}
