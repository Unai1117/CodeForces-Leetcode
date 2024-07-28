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
    ll N, D;
    char O;
    cin >> N >> O >> D;
    if(O == '+'){
        cout << N + D << endl;
    } else if(O == '-'){
        cout << N - D << endl;
    } else if(O == '*'){
        cout << N * D << endl;
    } else if(O == '/'){
        if(D == 0){
            cout << "ERROR" << endl;
        } else {
			double n = N, d = D;
            cout << fixed << setprecision(2) << n / d << endl;
        }
    }
}


int main() {
	solve(); 
	return 0; 
}
