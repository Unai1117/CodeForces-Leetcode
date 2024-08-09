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

bool binarySeach(int arr[], int i, int j, int q) {
	if(i > j) return false;
	int mid = (i + j) / 2;
	if(arr[mid] == q) return true;
	if(arr[mid] < q) return binarySeach(arr, mid + 1, j, q);
	return binarySeach(arr, i, mid - 1, q);
}

void solve() {
	int n; cin >> n;
	int arr[n];
	REPN(n) cin >> arr[i];
	sort(arr, arr + n);
	int l; cin >> l;
	
	for(int i = 0; i < l; ++i) {
		int q; cin >> q;
		bool found = binarySeach(arr, 0, n - 1, q);
		if(found) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

int main() {
	solve(); 
	return 0; 
}
