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
	vector<int> a(3);
	REPN(3) cin >> a[i];
	sort(a.begin(), a.end());
	int x = a[1];

	int dist = 0; 
	for(int i = 0; i < 3; ++i){
		dist += abs(a[i] - x);
	}
	cout << dist << endl;
}

int main() {
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0; 
}
