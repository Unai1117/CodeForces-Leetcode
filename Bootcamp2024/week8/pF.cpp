#include <bits/stdc++.h>
#include <functional>
#include <limits>
#include <queue>
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
    int to, length;
};

struct State {
    int node;
    double time;
    bool operator>(const State& other) const {
        return time > other.time;
    }
};

vector<double> dijkstra(int start, int n, const vector<vector<Edge>>& adj, double speed) {
    vector<double> dist(n+1, numeric_limits<double>::infinity());
    priority_queue<State, vector<State>, greater<State>> pq;
    dist[start] = 0.0;
    pq.push({start, 0.0});

    while(!pq.empty()) {
        State current = pq.top();
        pq.pop();

        if(current.time > dist[current.node]) continue;
        for(const Edge& edge : adj[current.node]) {
            double new_time = current.time + edge.length / speed;
            if(new_time < dist[edge.to]) {
                dist[edge.to] = new_time;
                pq.push({edge.to, new_time});
            }
        }
    }
    return dist;
}

int main() {
	int n, t, va, vb, a, b;
	cin >> n >> t >> va >> vb >> a >> b;
	vector<vector<Edge>> adj(n+1);
	for(int i = 0; i < n-1; ++i) {
	   int u, v, d;
		cin >> u >> v >> d;
		adj[u].push_back({v, d});
		adj[v].push_back({u, d});
	}

	vector<double> dist_a = dijkstra(a, n, adj, va);
	vector<double> dist_b = dijkstra(b, n, adj, vb);
	vector<int> meeting_points;
	for(int i = 1; i <= n; ++i) {
	   if(dist_a[i] <= t && dist_b[i] <= t){
			meeting_points.push_back(i);
		}
	}

	cout << meeting_points.size() << endl;
    for (int place : meeting_points) {
        cout << place << " ";
    }
    cout << endl;
	return 0;
}
