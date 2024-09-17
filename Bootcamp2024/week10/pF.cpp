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
	int n, m;
	cin >> n >> m;
	int arr[n][m];
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cin >> arr[i][j];
			if(i == 0 && j == 0) continue;
			if(i == 0){
				arr[i][j] += arr[i][j-1];
			} else if(j == 0){
				arr[i][j] += arr[i-1][j];
			} else {
				arr[i][j] += max(arr[i-1][j], arr[i][j-1]);
			}
		}
	}
	cout << arr[n-1][m-1] << endl;
}

int main() {
	solve(); 
	return 0; 
}
