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

void encontrarPuntoSilla(const vector<vector<int>>& matriz, int n, int m) {
    for (int i = 0; i < n; ++i) {

        int min_val = matriz[i][0];
        int min_col = 0;
        for (int j = 1; j < m; ++j) {
            if (matriz[i][j] < min_val) {
                min_val = matriz[i][j];
                min_col = j;
            }
        }

        bool es_maximo = true;
        for (int k = 0; k < n; ++k) {
            if (matriz[k][min_col] > min_val) {
                es_maximo = false;
                break;
            }
        }

        if (es_maximo) {

            cout << i << " " << min_col << endl;
            return;
        }
    }

    cout << "-1 -1" << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> matriz(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matriz[i][j];
            }
        }

        encontrarPuntoSilla(matriz, n, m);
    }

    return 0;
}
