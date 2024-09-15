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

void solve(){
    int a, b, c;
    cin >> a >> b >> c;
    int res = -1;
	for(int i = 0; i <= 5; ++i){
	    for(int j = 0; j <= 5; ++j){
			for(int k = 0; k <= 5; ++k){
			    if(i + j + k <= 5) res = max(res, (a + i) * (b + j) * (c + k));
			}
		}
	}
	cout << res << endl;
}

int main() {
	int t; cin >> t;
	while(t--){
	   solve();
	}
	return 0;
}
