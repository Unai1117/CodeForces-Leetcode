#include <bits/stdc++.h>
#include <utility>
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
    int n, k; cin >> n >> k;
    vector<int> a(k, 0);
    for(int i = 0; i < k; ++i){
        int b, c; cin >> b >> c;
        a[b-1] += c;
    }
    sort(a.rbegin(), a.rend());
    ll ans = 0;
    for(int i = 0; i < min(n,k); ++i){
        ans += a[i];
    }
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
	    solve();
    }
	return 0;
}
