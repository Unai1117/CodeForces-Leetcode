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
	int N, P; 
	cin >> N >> P;
	int arr[P];
	REPN(P){
		cin >> arr[i];
	}
	string res[P]; 
	for(int i = 0; i < P; ++i){
		int diff = abs(arr[i] - N);
		if(diff == 0){
			res[i] = "1p";
		} else if(diff <= 5){
			res[i] = "0.5p";
		} else if(diff <= 10){
			res[i] = "0.25p";
		} else {
			res[i] = "0p";
		}
	}
	REPN(P){
		cout << res[i] << " ";
	}
	cout << endl;
}

int main() {
	solve(); 
	return 0; 
}
