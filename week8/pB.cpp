#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
const int MAX = 300001; 

int main(){
    int dp[MAX]; 
    dp[0] = 0; 
    dp[1] = 1;
    for(int i = 2; i < MAX; i++){
        dp[i] = (dp[i-1] + dp[i-2]) % MOD;
    }

    int n;
    cin >> n;
    while(n--){
        int x; 
        cin >> x;
        cout << dp[x] << "\n";
    }
}