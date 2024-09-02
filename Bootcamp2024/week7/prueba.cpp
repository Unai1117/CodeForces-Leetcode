#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

typedef long long ll;

struct Compare {
    bool operator()(const pair<ll, ll>& a, const pair<ll, ll>& b) {
        return a.first < b.first; // Max-heap based on priority
    }
};

int main() {
    int q;
    cin >> q;
    
    unordered_map<ll, ll> tareas;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, Compare> maxHeap; 
    
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
                } else {
                    maxHeap.pop(); // Remove invalid elements
                }
            }
        }
    }
    
    return 0;
}