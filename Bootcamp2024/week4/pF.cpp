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

int main() {
	int l; cin >> l;
    char c;
    bool enBlanco = true;

    char bef [l][l];

    REP(i, 0, l){
        REP(j, 0, l){
            cin >> c;
            if (c=='#') enBlanco = false;
            bef[i][j] = c;
        }
    }
    if (enBlanco){
        cout << "NO LLEVABA MERMELADA"; return 0;
    }
    REP(i, 0, l){
        REP(j, 0, l){
            cin >> c;
            if (c != bef[i][j]) {
                cout << "TRAGEDIA"; return 0;
            }
        }
    }
    cout << "HA HABIDO SUERTE"; 
}
