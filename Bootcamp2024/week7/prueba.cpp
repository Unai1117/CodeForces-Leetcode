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
	int q;
    cin >> q;
    
    unordered_map<ll, ll> tareas;
    priority_queue<pair<ll, ll>> maxHeap; 
    unordered_set<ll> eliminados;
    
    while (q--) {
        char type;
        cin >> type;
        
        if (type == '+') {
            ll pr, id;
            cin >> pr >> id;
            tareas[id] = pr;
            maxHeap.push({pr, id});
        } 
        else if (type == '-') {
            ll id;
            cin >> id;
            if (tareas.find(id) != tareas.end()) {
                cout << id << endl;
                tareas.erase(id);
                eliminados.insert(id);
            }
        } 
        else if (type == '!') {
            while (!maxHeap.empty()) {
                ll pr = maxHeap.top().first;
                ll id = maxHeap.top().second;
                if (tareas.find(id) != tareas.end() && tareas[id] == pr) {
                    cout << id << endl;
                    tareas.erase(id);
                    maxHeap.pop();
                    break;
                } else if (eliminados.find(id) != eliminados.end()) {
                    maxHeap.pop();  
                }
            }
        }
    }
}

int main() {
	solve(); 
	return 0; 
}
