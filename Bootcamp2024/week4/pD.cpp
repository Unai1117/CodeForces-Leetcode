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
	int N, M; 
	cin >> N >> M;
	vector<string> mesa(N);
	REPN(N) {
		cin >> mesa[i];
	}
	vector<vector<bool>> gotas(N, vector<bool>(M, false));

	for(int i = 0; i < N; ++i){
		for(int j = 0; j < M; ++j){
			if(mesa[i][j] == '#'){
				gotas[i][j] = true;
			}
		}
	}

	for(int i = 0; i < N; ++i){
		for(int j = 0; j < M; ++j){
			if(gotas[i][j]){
				for(int k = 0; k < M; ++k){
					mesa[i][k] = '#';
				}
				for(int k = 0; k < N; ++k){
					mesa[k][j] = '#';
				}
			}
		}
	}

	REPN(N) {
		cout << mesa[i] << endl;
	}
}

int main() {
	solve(); 
	return 0; 
}
