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
	vector<ll> arr; 
	ll n;
	while(cin >> n){
		arr.push_back(n);
	}
	ll res[arr.size()];
	memset(res, 0, sizeof(res));
	res[0] = arr[0]; 
	for(size_t i = 1; i < arr.size(); ++i){
		res[i] = arr[i] + res[i-1];
	}
	REPN(arr.size()){
		cout << res[i] << " ";
	}
	cout << endl;
}

int main() {
	solve(); 
	return 0; 
}
