#include <bits/stdc++.h>
#include <unordered_set>
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
	string a;
    cin >> a;
	cout << a.size() << endl;
    if (a.size() <= 2)
        cout << "NO\n";
    else
    {
        if (a[0] != '1' || a[1] != '0' || a[2] == '0' || a.size() == 3 && a[2] == '1')
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
