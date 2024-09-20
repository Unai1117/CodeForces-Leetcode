#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define entf cout << endl
#define ent cout << "\n"
#define REPN(n) for(int i = 0; i < n; ++i)
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPV(i, a, b) for (int i = a; i >= b; --i)
#define MOD 1000000007
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void solve() {
	int n;
    cin >> n; 
    int dp[n], arr[n]; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

	for(int i = 0; i < n; ++i) {
		dp[i] = 1; 
		for(int j = 0; j < i; ++j){
			if(arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}
	int count = 0; 
	REPN(n) {
		count  = max(count, dp[i]);
	}
	cout << count << endl;
}
 

int main() {
	solve(); 
	return 0; 
}
