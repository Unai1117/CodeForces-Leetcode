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
    ll n; cin >> n;
    while(n != 1) {
        cout << n << " ";
        if(n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    cout << n << endl; 
}

int main() {
	solve();
	return 0;
}
