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
	int n, a, b, c, d; 
	cin >> n >> a >> b >> c >> d;
	ll res; 
	res = n + a; 
	cout << res << endl;
	res = n - b;  
	cout << res << endl;
	res = n * c;
	cout << res << endl;
	res = n / d;
	cout << res << endl;
	res = n % d;
	cout << res << endl;
}

int main() {
	solve(); 
	return 0; 
}
