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
	int n, a, b; cin >> n >> a >> b;
    string s; cin >> s;
    int x, y; x = y = 0;
    REPN(100){
        for(auto c : s) {
            if(c == 'N'){
                y++;
            } else if(c == 'S'){
                y--;
            } else if(c == 'E'){
                x++;
            } else if(c == 'W'){
                x--;
            }
            if(x == a && y == b){
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
	    solve(); 
    }
	return 0; 
}
