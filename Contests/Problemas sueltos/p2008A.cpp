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
    string s; cin >> s;
    int i = 0; 
    while(i < n && s[i] == '1') i++;
    if(i == n) {
        if(n == 4) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    else {
        if((i-1)*(i-1)==n) cout << "Yes" << endl;
        else cout << "No" << endl; 
    }
}

int main() {
    int t; cin >> t;
    while(t--){
	    solve(); 
    }
	return 0; 
}
