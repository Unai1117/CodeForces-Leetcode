#include <iostream>
#include <vector>

using namespace std;

// Función para completar el grafo
void completar_grafo(int n, int m, vector<pair<int, int>>& edges) {
    // Crear y rellenar la matriz de adyacencia
    vector<vector<bool>> adj(n + 1, vector<bool>(n + 1, false));

    // Marcar las aristas existentes
    for (auto& edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adj[u][v] = true;
        adj[v][u] = true;
    }

    // Encontrar las aristas faltantes
    vector<pair<int, int>> missing_edges;
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            if (!adj[i][j]) {
                missing_edges.push_back({i, j});
            }
        }
    }

    // Imprimir el número de aristas que se necesitan
    cout << missing_edges.size() << endl;

    // Imprimir las aristas faltantes
    for (auto& edge : missing_edges) {
        cout << edge.first << " " << edge.second << endl;
    }
}

int main() {
    // Leer la entrada
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> edges(m);
    
    for (int i = 0; i < m; ++i) {
        cin >> edges[i].first >> edges[i].second;
    }

    // Llamar a la función para completar el grafo
    completar_grafo(n, m, edges);

    return 0;
}
