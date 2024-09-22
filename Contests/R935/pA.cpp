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
	ll a, b, c; cin >> a >> b >> c;
	ll res = a;
	ll needExt = (3 - b % 3) % 3;
	if(b > 0 && needExt > c) {
		cout << "-1\n";
		return; 
	}
	c -= needExt;
	b += needExt;
	res += c/3 + (c % 3+1) / 2 + b/3; 

	cout << res << endl;
}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0; 
}