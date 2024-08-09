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

void solve() {
	int N, C; 
	cin >> N >> C;
	bool flag = false; 
	REPN(N){
		int n;
		cin >> n;
		if(n == C){
			flag = true; 
		}
	}
	if(flag){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}

int main() {
	int t; 
	cin >> t;
	while(t--){
		solve(); 
	}
	return 0; 
}
