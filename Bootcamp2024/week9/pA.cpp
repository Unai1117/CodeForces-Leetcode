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
	vector<ll> dp(n);
	for(int i = 0; i < 3; ++i){
		cin >> dp[i];
		cout << dp[i] << " ";
	}
	for(int i = 3; i < n; ++i) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		cout << dp[i] << " ";
	}
	entf;
}

int main() {
	solve(); 
	return 0; 
}
