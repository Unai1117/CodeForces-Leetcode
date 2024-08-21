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
	int n; 
	cin >> n;
	map<int, int> m; 
	int id; 
	REPN(n){
		cin >> id; 
		m[id]++; 
	}

	int maxFreq = 0; 
	int res = 0; 
	for(const auto& par : m){
		if(par.second > maxFreq || par.second == maxFreq && par.first < res){
			maxFreq = par.second; 
			res = par.first; 
		}
	}
	cout << res << endl;
}

int main() {
	solve(); 
	return 0; 
}
