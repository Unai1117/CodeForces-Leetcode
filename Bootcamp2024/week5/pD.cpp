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

struct GranoCafe {
	int calidad; 
	string tag; 
};

bool compare(const GranoCafe &a, const GranoCafe &b) {
	if(a.calidad == b.calidad) return a.tag < b.tag;
	return a.calidad < b.calidad;
}

void solve() {
	int n; cin >> n; 
	GranoCafe arr[n];
	REPN(n) {
		cin >> arr[i].calidad >> arr[i].tag; 
	}
	sort(arr, arr + n, compare);
	REPN(n) {
		cout << arr[i].calidad << " " << arr[i].tag << endl; 
	}
}

int main() {
	solve(); 
	return 0; 
}
