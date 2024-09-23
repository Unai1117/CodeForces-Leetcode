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
	int x, y; cin >> x >> y;
	if(x <= y) {
	   cout << x << " " << y << endl;
	} else {
	   cout << y << " " << x << endl;
	}
}

int main() {
    int t; cin >> t;
    while(t--){
	    solve();
    }
	return 0;
}
