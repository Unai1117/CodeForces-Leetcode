#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int main(){
    int n; cin >> n;
    int dp[n+1]; memset(dp, 0, sizeof(dp));
    dp[0] = 1; 
    long long sum; int j;
    for(int i = 1; i < n+1; i++){
        sum = 0;
        j = 1; 
        while(i - j >= 0 && j <= 6){
            sum += dp[i-j];
            j++; 
        }
        dp[i] = sum % MOD; 
    } 
    cout << dp[n] << endl;
}