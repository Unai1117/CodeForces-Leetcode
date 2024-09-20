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
	int n; cin >> n; 
	int dp[n+2]; memset(dp, 0, sizeof(dp));
	dp[0] = 0; dp[1] = 1; dp[2] = 1;
	int aux; 
	for(int i = 3, j = 4; i < n; i++, j++) {
		aux = dp[i-1];
		if(j % 2 == 0) aux = min(aux, dp[j/2-1]);
		if(j % 3 == 0) aux = min(aux, dp[j/3-1]);
		dp[i] = aux + 1;
	} 
	cout << dp[n-1] << endl;
}

int main() {
	solve(); 
	return 0; 
}
