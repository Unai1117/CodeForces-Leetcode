#include <bits/stdc++.h>
#include <unordered_map>
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
    unordered_map<int, int> m;

    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        m[x]++;
    }
    int max = 0;
    for(auto i : m) {
        if(i.second > max) {
            max = i.second;
        }
    }
    if(n == 1) {
        cout << 0 << endl;
        return;
    }
    cout << n - max << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
	    solve();
    }
	return 0;
}
