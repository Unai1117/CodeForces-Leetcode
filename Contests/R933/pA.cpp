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
	int n, m, k; cin >> n >> m >> k;
	vector<int> b(n);
	vector<int> c(m);
	REPN(n) cin >> b[i];
	REPN(m) cin >> c[i];

    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    int count = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            int sum = b[i] + c[j];
            if(sum <= k) count++;
            else break;
        }
    }
    cout << count << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
	    solve();
    }
	return 0;
}