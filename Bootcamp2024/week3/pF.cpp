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

void solve() {
	vector<int> arr;
	int n;  
	while(cin >> n){
		arr.push_back(n);
	}

	for(size_t i = 1; i < arr.size(); ++i){
		if(arr[i] > arr[i-1]){
			cout << "S"; 
		} else if(arr[i] < arr[i-1]){
			cout << "B"; 
		} else {
			cout << "I"; 
		}
	}
	cout << endl;
}

int main() {
	solve(); 
	return 0; 
}
