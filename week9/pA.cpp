#include <bits/stdc++.h>
using namespace std;
//vamos a guardar en cada casilla el mejor valor para llegar a esta misma 
#define REP(i, a, b) for(int i = a; i < b; i++)

int main(){
    int n, m; 
    cin >> n >> m;
    int arr[n][m];
    REP(i, 0, n){
        REP(j, 0, m){
            cin >> arr[i][j];
            if(i == 0 && j == 0) continue;
            if(i == 0){
                arr[i][j] += arr[i][j-1];
            } else if(j == 0){
                arr[i][j] += arr[i-1][j];
            } else {
                arr[i][j] += max(arr[i-1][j], arr[i][j-1]);
            }
        }
    }

    cout << arr[n-1][m-1] << endl;
}