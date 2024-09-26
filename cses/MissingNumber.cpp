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
	vector<bool> arr(n, false);
	REPN(n-1) {
		int x; cin >> x;
		arr[x-1] = true;
	}
	REPN(n) {
		if(!arr[i]) {
			cout << i+1 << endl;
			break;
		}
	}
}

int main() {
	solve(); 
	return 0; 
}
