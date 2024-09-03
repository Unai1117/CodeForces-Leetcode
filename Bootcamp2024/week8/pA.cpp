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

vector<int> solve(int n, const vector<int>& acusaciones) {
	vector<int> res(n);
	for(int i = 0; i < n; ++i){
		set<int> visited; 
		int act = i + 1;

		while(visited.find(act) == visited.end()) {
			visited.insert(act); 
			act = acusaciones[act - 1];
		}

		res[i] = act;
	}

	return res; 
}

int main() {
	int n; 
	cin >> n;
	vector<int> p(n);

	for(int i = 0; i < n; ++i){
		cin >> p[i];
	}
	vector<int> res = solve(n, p);
	for(int i = 0; i < n; ++i){
		cout << res[i] << ' ';
	}
	cout << endl;
	return 0; 
}
