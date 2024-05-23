#include <bits/stdc++.h>
using namespace std;

void solve(char maz[][10], long long& good, long long& bad, int y, int x, int m, int n){
    if(maz[y][x] != '.' && !(y == m-1 && x == n-1)){
        bad++; 
        return; 
    } else {
        if(y == m-1 && x == n-1){
            good++; 
            return; 
        } else {
            if(y < m-1) solve(maz, good, bad, y + 1, x, m, n);
            if(x < n-1) solve(maz, good, bad, y, x + 1, m, n);
        }
    }
}

int main(){
    int t, m, n;
    cin >> t;
    while(t--){
        cin >> m >> n;
        char maz[m][10];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> maz[i][j];
            }
        }

        long long good = 0; 
        long long bad = 0;

        solve(maz, good, bad, 0, 0, m, n);
        cout << good << " " << bad << endl;

    } 
}