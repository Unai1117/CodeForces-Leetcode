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
	int P; cin >> P;
    int V; cin >> V;
    long int count = 0;
    bool inside;


    for (int i = 0; i < P; i++){
        for (int j = 0; j < V; j++){
            inside = false;
            for (int z = 0; z < 2; z++){
                char window; cin >> window;
                if (window == '#'){
                    inside = true;
                }
            }
            if (inside) count++;
        }
    }

    cout << count << endl;

    
}

int main() {
	solve(); 
	return 0; 
}
