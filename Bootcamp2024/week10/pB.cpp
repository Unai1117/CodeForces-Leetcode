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

const int MAX_N = 300001;

void solve() {

}

int main() {
	int t; cin >> t;
	vector<ll> fib(MAX_N);
	fib[0] = 0;
	fib[1] = 1;
	for(int i = 2; i < MAX_N; ++i) {
		fib[i] = (fib[i-1] + fib[i-2])%MOD;
	}
	while(t--){
		int n; cin >> n;
		cout << fib[n] << endl;
	} 
	return 0; 
}
