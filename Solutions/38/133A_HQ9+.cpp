#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
 string s;
    int r=0;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            r= 1;
            break;
        }
    }
    if (r>0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
 
 
    return 0;
}
