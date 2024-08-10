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

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
	if(a.first == b.first) return a.second < b.second;
	return a.first > b.first;
}

void solve() {
	int n; cin >> n;
	pair<int, int> arr[n];
	REPN(n) {
		int a, b; cin >> a >> b;
		arr[i] = {a, b};
	}
	sort(arr, arr + n, compare);
	REPN(n) {
		cout << arr[i].first << " " << arr[i].second << endl;
	}
}

int main() {
	solve(); 
	return 0; 
}
