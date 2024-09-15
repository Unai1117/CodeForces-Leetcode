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

const int MAXN = 1001; 
vector<int> adj[MAXN];
vector<pair<int, int>> edges[MAXN];
vector<vector<bool>> visited;
vector<int> result;

void solve(int u) {
	stack<int> st; 
	st.push(u);

	while(!st.empty()) {
		int v = st.top(); 
		bool found = false;
		for(int i = 0; i < adj[v].size(); ++i) {
			int next = adj[v][i];
			if(!visited[v][i]){
				visited[v][i] = true;
				for(int j = 0; j < adj[next].size(); ++j)	{
					if(adj[next][j] == v && !visited[next][j]){
						visited[next][j] = true;
						break;
					}
				}
				st.push(next);
				found = true;
				break;
			}
		}
		if(!found) {
			result.push_back(v);
			st.pop();
		}
	}
}

int main() {
	int n, m, k;
    cin >> n >> m >> k;

    visited.resize(MAXN, vector<bool>(MAXN, false));
    vector<int> degree(n + 1, 0);

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        degree[a]++;
        degree[b]++;
    }

    int odd_count = 0;
    for (int i = 1; i <= n; ++i) {
        if (degree[i] % 2 != 0) {
            odd_count++;
        }
    }


    if (odd_count != 0 && odd_count != 2) {
        cout << "-1" << endl;
        return 0;
    }


    solve(k);

    if (result.size() != m + 1) {
        cout << "-1" << endl;
        return 0;
    }

    reverse(result.begin(), result.end());  
    for (int v : result) {
        cout << v << endl;
    }

    return 0;
}
