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

int solve(const string& s, int k) {
	set<string> set; 
	for(int i = 0; i <= s.size() -k; ++i){
		string sub = s.substr(i, k);
		set.insert(sub);
	}

	return set.size();
}

int main() {
	string s; 
	int k;

	cin >> s >> k;
	int res = solve(s, k);
	cout << res << endl;

	return 0; 
}
