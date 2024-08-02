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

void solve() {
	int n; 
	cin >> n;
	int arr1[n], arr2[n];
	REPN(n) {
		cin >> arr1[i];
	}
	REPN(n) {
		cin >> arr2[i];
	}
	REPN(n) {
		if(i == n-1) cout << arr1[i] + arr2[i];
		else{
			cout << arr1[i] + arr2[i] << " " << endl;
		}
	}
}

int main() {
	solve(); 
	return 0; 
}
