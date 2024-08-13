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

void imprimirCaracteres(int n) {
    if (n == 0) return;
    cout << "#";
    imprimirCaracteres(n - 1);
}

void dibujarFlecha(int nivel, int w) {
    if (nivel > w) return;

    imprimirCaracteres(nivel);
    cout << endl;

    dibujarFlecha(nivel + 1, w);
    if (nivel != w) {
        imprimirCaracteres(nivel);
        cout << endl;
    }
}

int main() {
    int w;
    cin >> w;
    dibujarFlecha(1, w);
    return 0;
}
