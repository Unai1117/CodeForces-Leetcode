#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define ent cout << '\n'



int main() {
    int n, a, b, c; cin >> n >> a >> b >> c;
    int arr[n+1]; memset(arr, 0, sizeof(arr));
    REP(i, 0, n+1){
        if (!arr[i] && i) continue;
        if (i+a <= n) arr[i+a] = max(arr[i+a], arr[i]+1);
        if (i+b <= n) arr[i+b] = max(arr[i+b], arr[i]+1);
        if (i+c <= n) arr[i+c] = max(arr[i+c], arr[i]+1);
    }
    cout << arr[n] << endl;
    return 0;
}
