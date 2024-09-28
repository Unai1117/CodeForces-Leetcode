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
	int n, k; cin >> n >> k;
    unordered_map<int, int> mp;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        mp[x]++;
    }
    int ans = n; 
    for(auto x : mp) {
        if(x.second >= k) {
            ans = k-1;
        }
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
