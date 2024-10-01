#include <bits/stdc++.h>
#include <cstdlib>
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
	int n; cin >> n;
	vector<int> a(n);
	REPN(n) cin >> a[i];
	if(n > 2) {
	    cout << "NO" << endl;
		return;
	}
	int d = abs(a[0] - a[1]);
	if(d > 1) {
	    cout << "YES" << endl;
	} else cout << "NO" << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
	    solve();
    }
	return 0;
}
