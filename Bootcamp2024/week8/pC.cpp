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

class UnionFind {
	public:
	vector<int> parent, rank;

	UnionFind(int n){
		parent.resize(n+1); 
		rank.resize(n+1, 0);
		for(int i = 0; i <= n; ++i){
			parent[i] = i;
		}
	}

	int find(int x){
		if(parent[x] != x){
			parent[x] = find(parent[x]);
		}
		return parent[x];
	}

	bool union_sets(int x, int y){
		int rootX = find(x);
		int rootY = find(y);
		if(rootX != rootY){
			if(rank[rootX] > rank[rootY]){
				parent[rootY] = rootX;
			} else if (rank[rootX] < rank[rootY]){
				parent[rootX] = rootY;
			} else {
				parent[rootY] = rootX;
				rank[rootX]++;
			}
			return true;
		}
		return false;
	}
};


int main() {
	int n; 
	cin >> n;
	UnionFind uf(n);

	string query;
	int a, b; 
	while(cin >> query >> a >> b){
		if(query == "?"){
			if(uf.union_sets(a,b)){
				cout << "SI" << endl;
			} else {
				cout << "NO" << endl;
				break;
			}
		}
	}
	return 0; 
}
