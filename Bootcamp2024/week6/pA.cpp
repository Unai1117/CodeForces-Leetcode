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

void solve(int n) {
	if(n > 0){
		cout << n << endl;
		solve(n-1);
	}
}

int main() {
	int n; cin >> n;
	solve(n); 
	return 0; 
}
