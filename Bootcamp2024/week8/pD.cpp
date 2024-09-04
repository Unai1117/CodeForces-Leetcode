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

struct Edge {
	int dest; 
	int risk; 
};

struct Node {
    int corner;
    int accumulated_risk;
    bool operator>(const Node& other) const {
        return accumulated_risk > other.accumulated_risk;
    }
};

void dijkstra(int n, int start, vector<vector<Edge>>& graph) {
    vector<int> risk(n, INT_MAX);
    vector<int> parent(n, -1);
    priority_queue<Node, vector<Node>, greater<Node>> pq;
    
    risk[start] = 0;
    pq.push({start, 0});
    
    while (!pq.empty()) {
        Node node = pq.top();
        pq.pop();
        
        int current = node.corner;
        int current_risk = node.accumulated_risk;
        
        if (current_risk > risk[current]) {
            continue;
        }
        
        for (auto& edge : graph[current]) {
            int next = edge.dest;
            int next_risk = current_risk + edge.risk;
            
            if (next_risk < risk[next]) {
                risk[next] = next_risk;
                parent[next] = current;
                pq.push({next, next_risk});
            }
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (i != start && risk[i] != INT_MAX) {
            cout << i << ":\n";
            cout << "riesgo " << risk[i] << "\n";
            
            vector<int> path;
            int temp = parent[i];  // Empezar desde el nodo anterior a `i`
            while (temp != start) {
                path.push_back(temp);
                temp = parent[temp];
            }
            path.push_back(start);  // Agregar el nodo de inicio al final

            for (int j = 0; j < path.size(); ++j) {
                cout << path[j];
                if (j < path.size() - 1) {
                    cout << " <- ";
                }
            }
            cout << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, s;
        cin >> n >> s;
        
        vector<vector<Edge>> graph(n);
        
        for (int i = 0; i < n; ++i) {
            int g;
            cin >> g;
            
            for (int j = 0; j < g; ++j) {
                int d, p;
                cin >> d >> p;
                graph[i].push_back({d, p});
            }
        }
        
        dijkstra(n, s, graph);
    }
    
    return 0;
}