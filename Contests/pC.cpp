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

int solve(int x, int y, int k) {
	int res = 0;
    if(ceil(x/(k+0.0)) > ceil(y/(k+0.0))){
        res = ceil(max(x,y)/(k+0.0))*2 - 1;
        return res;
    } 
    res = ceil(max(x,y)/(k+0.0))*2 ;
    return res; 
}

int main() {
    int t; cin >> t;
    while(t--){
        int x, y, k; 
        cin >> x >> y >> k;
	    int moves = solve(x, y, k);
        cout << moves << endl; 
    }
	return 0; 
}
