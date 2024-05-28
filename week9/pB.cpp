#include <bits/stdc++.h>
using namespace std; 
#define REP(i, a, b) for(int i = a; i < b; i++)
#define MOD 1000000007

int main(){
    int n, m;
    long long aux;  
    cin >> n >> m;
    long long dp[n][m];
    memset(dp, 0, sizeof(dp)); 
    dp[0][0] = 1;

    REP(i, 0, n){
        REP(j, 0 , m){
            cin >> aux; 
            aux %= MOD;
            if(aux != 0){
                if (i+aux < n) dp[i+aux][j] = (dp[i][j] + dp[i+aux][j]) % MOD;
                if (j+aux < m) dp[i][j+aux] = (dp[i][j] + dp[i][j+aux]) % MOD;
            }

        }
    } 
    std::cout << dp[n-1][m-1];
}