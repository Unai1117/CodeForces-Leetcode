#include <bits/stdc++.h>
using namespace std; 
#define REP(i, a, b) for(int i = a; i < b; i++)
#define MOD 1000000007

int main(){
    int n, m, aux; 
    cin >> n >> m;
    int dp[n][m];
    memset(dp, 0, sizeof(dp)); 
    dp[0][0] = 1;

    REP(i, 0, n){
        REP(j, 0 , m){
            cin >> aux; 
            aux %= MOD;
            if (dp[i][j]){
                if (i+aux < n && j < m) dp[i+aux][j] = (dp[i][j] + dp[i+aux][j]) % MOD;
                if (i < n && j+aux < m) dp[i][j+aux] = (dp[i][j] + dp[i][j+aux]) % MOD;
            }
        }
    } 
    cout << dp[n-1][m-1];
}