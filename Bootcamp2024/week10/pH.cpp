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
	int n, m; cin >> n >> m;
	ll dp[n][m];
	memset(dp, 0, sizeof(dp));
	dp[0][0] = 1;
	REP(i, 0, n) {
		REP(j, 0, m){
			if(i+2 < n && j+1 < m) dp[i+2][j+1] += dp[i][j];
			if(i+1 < n && j+2 < m) dp[i+1][j+2] += dp[i][j];
		}
	}
	cout << dp[n-1][m-1] << endl;
}

int main() {
	solve(); 
	return 0; 
}
