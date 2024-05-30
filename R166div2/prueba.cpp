#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define entf cout << endl
#define ent cout << "\n"
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPV(i, a, b) for (int i = a; i >= b; --i)
#define MOD 1000000007

void solve() {
    int n; 
    int num;
    cin >> n;
    int arr1[n]; 
    int arr2[n+1]; 
    REP(i, 0, n){
        cin >> num;
        arr1[i] = num; 
    }
    REP(i, 0, n+1){
        cin >> num; 
        arr2[i] = num; 
    }
    ll count = 0; 
    bool flag = false; 
    int closest = 0;
    for(int i = 0; i < n; i++){
        if(arr1[i] >= arr2[n+1]){
            flag = true; 
        }
        count += abs(arr1[i] - arr2[i]);
        if(!flag){
            int aux = abs(arr1[i] - arr2[n+1]);
            if(aux < closest){
                closest = aux; 
            }
        }
    }
    if(flag){
        count += 1; 
    } else {
        count +=  1+closest;
    }
    if(n == 1){
        count++;

    }
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
    return 0;
}
