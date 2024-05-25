#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main(){
    int n, m; 
    cin >> n >> m;
    char t; 
    bool arr[n][m]; 
    int dp[n][m];
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> t;
            arr[i][j] = (t == '.');
        }
    }
    
    for(int i = 0; i < n && arr[i][0]; i++) dp[i][0] = 1;
    for(int i = 0; i < m && arr[0][i]; i++) dp[0][i] = 1;

    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(arr[i][j]){
                dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % MOD;
            }
        }
    }
    cout << dp[n-1][m-1] << endl;
}