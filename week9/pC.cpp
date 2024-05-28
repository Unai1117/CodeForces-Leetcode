#include <bits/stdc++.h>
using namespace std; 
#define REP(i, a, b) for(int i = a; i < b; i++)

int main(){
    int n, m; 
    cin >> n >> m;
    int dp[n][m];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    REP(i, 0, n){
        REP(j, 0, m){
            if(dp[i][j]){
                if(i + 2 < n && j + 1 < m) dp[i+2][j+1] += dp[i][j];
                if(i + 1 < n && j + 2 < m) dp[i+1][j+2] += dp[i][j];
            }
        }
    }
    cout << dp[n-1][m-1] << endl;
}