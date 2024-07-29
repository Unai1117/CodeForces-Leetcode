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
const double pi = 3.141592; 

void solve() {
	int F; 
	cin >> F;
	if(F == 1){
		double r; 
		cin >> r;
		double area = pi * r * r;
		cout << fixed << setprecision(5) << area; ent;
	} else if(F == 2){
		double x;
		cin >> x;
		double area = x * x; 
		cout << fixed << setprecision(5) << area; ent;
	} else if(F == 3){
		double x, y; 
		cin >> x >> y;
		double area = x * y; 
		cout << fixed << setprecision(5) << area; ent;
	} else {
		double b, h;
		cin >> b >> h; 
		double area = (b * h) / 2;
		cout << fixed << setprecision(5) << area; ent;
	}
}

int main() {
	int n; 
	cin >> n;
	while(n--){
		solve();
	}
	return 0; 
}
