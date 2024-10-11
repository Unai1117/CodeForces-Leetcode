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
	int n; cin >> n;
	vector<int> a(n);
	REPN(n) cin >> a[i];
	int max,pos = 0;
	REPN(n){
		if (a[i] > max) {
			
			max = a[i];
			pos = i;
		}
	}
	int ans = 0; 
	if(pos % 2 != 0 && n % 2 != 0){
		ans+= max + n/2 -1;
	} else {
		ans+= max + n/2;
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
