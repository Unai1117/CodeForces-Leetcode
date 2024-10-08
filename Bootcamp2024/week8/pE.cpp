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

void completar_grafo(int n, vector<pair<int, int>>& edges) {
    // Crear y rellenar la matriz de adyacencia
    vector<vector<bool>> adj(n + 1, vector<bool>(n + 1, false));

    for (auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adj[u][v] = true;
        adj[v][u] = true;
    }

    vector<pair<int, int>> missing_edges;
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            if (!adj[i][j]) {
                missing_edges.push_back({i, j});
            }
        }
    }

    cout << missing_edges.size() << endl;

    for (auto& edge : missing_edges) {
        cout << edge.first << " " << edge.second << endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> edges(m);

    for (int i = 0; i < m; ++i) {
        cin >> edges[i].first >> edges[i].second;
    }

    completar_grafo(n, edges);
    return 0;
}
