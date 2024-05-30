#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define entf cout << endl
#define ent cout << "\n"
#define REPN(n) for(int i = 0; i < n; ++i)
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPV(i, a, b) for (int i = a; i >= b; --i)
#define MOD 1000000007

void solve(){
    int n; 
    cin >> n;
    string s = "";
    string s1 = "";  
    cin >> s;
    s1 = s; 
    sort(s.begin(), s.end());
    if(s1 == s){
        cout << "YES" << endl; 
        return;  
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    int t; 
    cin >> t;
    while (t-- > 0)
    {
        solve(); 
    }
    
    return 0;    
}
