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

vector<int> solve(int n, int m, int X, int Y, const vector<pair<int, int>>& connections) {
	//Crear lista de adyacencia 
	vector<vector<int>> adj(n+1); 
	for(const auto& con : connections){
		int a =  con.first;
		int b = con.second;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	//Cola para BFS
	queue<int> q;
	vector<int> visited(n+1, -1);
	vector<int> parent(n+1, -1);

	q.push(X);
	visited[X] = 0;
	while(!q.empty()){
		int node = q.front();
		q.pop(); 
		for(int neighbor : adj[node]){
			if(visited[neighbor] == -1){ //Si no ha sido visitado
				visited[neighbor] = visited[node] + 1;
				parent[neighbor] = node;
				q.push(neighbor);
				if(neighbor == Y){
					break;
				}
			}
		}
	}

	//Reconstruir el camino
	vector<int> path;
	int current = Y;
	while(current != -1){
		path.push_back(current);
		current = parent[current];
	}
	reverse(path.begin(), path.end());
	return path;
}

int main() {
	int n, m, X, Y; 
	cin >> n >> m >> X >> Y;
	
	vector<pair<int, int>> connections(m); 
	for(int i = 0; i < m; ++i){
		cin >> connections[i].first >> connections[i].second; 
	}

	vector<int> path = solve(n, m, X, Y, connections);
	cout << path.size() - 1 << endl;
	for(int i = 0; i < path.size(); ++i){
		cout << path[i] << " "; 
	}
	cout << endl;
	return 0; 
}
