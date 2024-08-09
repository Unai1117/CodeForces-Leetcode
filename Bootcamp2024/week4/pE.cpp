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
	string s; 
	getline(cin, s);
	string enmarcado; 
	int lEnmarcado = 1;
	int count = 1; 
	bool space = false; 
	for(char c : s){
		if(c == ' '){
			enmarcado += " *** ";
			lEnmarcado += 5;
			space = true;
		} else {
			if(count == 1){
				count ++; 
				enmarcado += "*  ";
				enmarcado.back() = c;
				lEnmarcado += 4;
			} else if(space){
				enmarcado += " ";
				enmarcado.back() = c;
				space = false;
				lEnmarcado += 1;
			} else {
				enmarcado += " *  ";
				enmarcado.back() = c;
				lEnmarcado += 4;
			}
			
		}
	}
	enmarcado += " *";
	string line(lEnmarcado, '*');
	cout << line << endl;
	cout << enmarcado << endl;
	cout << line << endl;
}

int main() {
	int t; 
	cin >> t;
	cin.ignore();
	while(t--) {
		solve();
	} 
	return 0; 
}
