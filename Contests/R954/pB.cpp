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

void solve(int n, int m, vector<vector<int>>& matriz) {

	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			int mx = 0; 
			if(i > 0) mx = max(mx, matriz[i-1][j]);
			if(i < n-1) mx = max(mx, matriz[i+1][j]);
			if(j > 0) mx = max(mx, matriz[i][j-1]); 
			if(j < m-1) mx = max(mx, matriz[i][j+1]);
			if(mx != 0 && mx < matriz[i][j]) matriz[i][j]=mx;
		}
	}
}

int main() {
	int t; cin >> t; 
	while(t--) {
		int n, m; cin >> n >> m;
		vector<vector<int>> matriz(n, vector<int>(m));

		for(int i = 0; i < n; ++i) { 
			for(int j = 0; j < m; ++j) {
				cin >> matriz[i][j];
			}
		}

		solve(n, m, matriz);

		 for(int i = 0; i < n; ++i) { 
			for(int j = 0; j < m; ++j) {
				cout << matriz[i][j] << " ";
			}
		}
		cout << endl;
	} 
	return 0; 
}
