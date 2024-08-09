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
	int n; cin >> n;
	int size[n]; 
	REPN(n) cin >> size[i];
	sort(size, size + n);

	int min = INT_MAX; 
	
	for(int i = 1; i < n; ++i) {
		int diff = size[i] - size[i - 1];
		if(min > diff) min = diff;
	}
	cout << min << endl;
}

int main() {
	solve(); 
	return 0; 
}
