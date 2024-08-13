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

int solve(int n) {
	if(n == 1){
		return 1;
	}
	return n + solve(n-1);
}

int main() {
	int n; cin >> n;
	int res = solve(n); 
	cout << res << endl;
	return 0; 
}
