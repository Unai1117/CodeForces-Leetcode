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
	int n, m; cin >> n >> m;
	string s; cin >> s;
	unordered_map<char, int> map;
	map['A'] = 0;
	map['B'] = 0;
	map['C'] = 0;
	map['D'] = 0;
	map['E'] = 0;
	map['F'] = 0;
	map['G'] = 0;
	REPN(n) map[s[i]]++;
	int ans = 0;
	for(auto i : map) {
	    ans += max(0, m - i.second);
	}
	cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
	    solve();
    }
	return 0;
}
