#include <bits/stdc++.h>
#include <cstring>
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
	ll aux;
	memset(dp, 0, sizeof(dp));

	dp[0][0] = 1;
	for(int i = 0; i < n; ++i) {
	   for(int j = 0; j < m; ++j) {
			cin >> aux;
			aux %= MOD; 
			if(aux != 0){
				if(i+aux < n) dp[i+aux][j] = (dp[i][j] + dp[i+aux][j]) % MOD; 
				if(j+aux < m) dp[i][j+aux] = (dp[i][j] + dp[i][j+aux]) % MOD; 
			}
		}
	}
	cout << dp[n-1][m-1] << endl; 
}

int main() {
	solve();
	return 0;
}
