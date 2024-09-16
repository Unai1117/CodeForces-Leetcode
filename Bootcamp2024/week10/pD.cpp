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
	vector<ll> dp(n+1, 0);
	dp[0] = 1;
	ll sum; int j; 
	for (int i = 1; i < n+1; ++i){
		sum = 0;
		j = 1;
		while (i-j >= 0 && j <= 6) {
			sum += dp[i-j];
			j++;
		}
		dp[i] = sum%MOD;
	}
	cout << dp[n] << endl;
}

int main() {
	solve(); 
	return 0; 
}
