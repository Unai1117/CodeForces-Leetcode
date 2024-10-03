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
	string s; cin >> s; 
    set<char> a; 
    int ans = 0;
    for(auto c : s) {
        a.insert(c);
        if(a.size() > 3) {
            ans++;
            a.clear();
            a.insert(c);            
        }
    }
    if(!a.empty()) ans++; 
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
	    solve(); 
    }
	return 0; 
}
