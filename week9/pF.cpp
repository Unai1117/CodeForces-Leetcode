#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define entf cout << endl
#define ent cout << "\n"
#define REP(n) for (int i = 0; i < n; ++i)
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define MOD 1000000007

void solve(){
    int n, k; cin >> n >> k;
    int dp[n]; dp[0] = 1; 
    REP(i, 1, n){
        dp[i] = 0; 
        for(int j = 0; j < k+1; ++j){
            if(i - j >= 0){
                dp[i] = (dp[i] + dp[i-j]) % MOD;
            }
        }
    }
    cout << dp[n-1] << endl;
}

int main(){
    solve(); 
    return 0;    
}
