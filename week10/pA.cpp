#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define entf cout << endl
#define ent cout << "\n"
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define REPV(i, a, b) for (int i = a; i >= b; --i)
#define MOD 1000000007

void solve(){
    int n; 
    cin >> n; 
    int arr[n]; 
    REP(i, 0, n){
        cin >> arr[i];
    } 
    bool flag = false; 
    for(int i = 0; i < n && !flag; i++){
        int a = arr[i]; 
        int b = arr[a-1]; 
        int c = arr[b-1];
        if(c == i+1){
            flag = true;
        }
    }
    if(flag){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
    solve();    
}
