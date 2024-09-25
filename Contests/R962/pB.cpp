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
	char A[n][n]; 

    for(auto &row : A) {
        for(auto &c : row) {
            cin >> c;
        }
    }

    for(int i = 0; i < n; i+=k) {
        for(int j = 0; j < n; j+=k) {
            cout << A[i][j];
        }
        cout << "\n"; 
    }
}

int main() {
    int t; cin >> t;
    while(t--){
	    solve(); 
    }
	return 0; 
}
