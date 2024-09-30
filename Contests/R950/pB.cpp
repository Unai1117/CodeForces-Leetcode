#include <bits/stdc++.h>
#include <functional>
#include <vector>
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
	int n, f, k; cin >> n >> f >> k;
	vector<int> a(n);
	for(int i = 0; i < n; ++i) {
	   cin >> a[i];
	}
	int val = a[f-1];
	sort(a.begin(), a.end(), greater<int>());
	if(a[k] < val || k >= n){
	   cout << "YES" << endl;
	   return;
	}

	if(a[k-1] == val){
	   cout << "MAYBE" << endl;
	} else cout << "NO" << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
	    solve();
    }
	return 0;
}
