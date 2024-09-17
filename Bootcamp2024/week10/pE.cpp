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
	bool arr[n][m];
	int dp[n][m];
	memset(dp, 0, sizeof(dp));
	char t; 
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> t;
			arr[i][j] = (t == '.'); //si t == '.' podemos pasar por esa casilla por lo q arr[i][j] = true
		}
	}

	for(int i = 0; i < n && arr[i][0]; ++i) dp[i][0] = 1; 
	for(int j = 0; j < m && arr[0][j]; ++j) dp[0][j] = 1; 

	for(int i = 1; i < n; ++i) {
		for(int j = 1; j < m; ++j) {
			if(arr[i][j]) {
				dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
			}
		}
	}
	cout << dp[n-1][m-1] << endl;
}

int main() {
	solve(); 
	return 0; 
}
