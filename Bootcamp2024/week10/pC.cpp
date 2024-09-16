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
	int n, a, b, c; cin >> n >> a >> b >> c;
	int arr[n+1];memset(arr, 0, sizeof(arr));
	for(int i = 0; i < n+1; ++i){
		if(!arr[i] && i) continue;
		if(i+a <= n) arr[i+a] = max(arr[i+a], arr[i]+1);
		if(i+b <= n) arr[i+b] = max(arr[i+b], arr[i]+1);
		if(i+c <= n) arr[i+c] = max(arr[i+c], arr[i]+1);
	}
	cout << arr[n] << endl;
}

int main() {
	solve(); 
	return 0; 
}
