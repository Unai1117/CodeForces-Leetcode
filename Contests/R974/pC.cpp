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
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void solve() {
	int n;
    cin >> n;
    
    ll sum = 0;
    vector<ll> v(n);
    for (auto &c : v) cin >> c, sum += c;
 
    sort(v.begin(),v.end());
 
    if (n < 3){
        cout << "-1\n";
        return;
    }
    cout << max(0LL,v[n/2]*2*n-sum+1) << '\n';
}

int main() {
    int t; cin >> t;
    while(t--){
	    solve(); 
    }
	return 0; 
}
