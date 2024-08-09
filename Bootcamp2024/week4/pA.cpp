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
	int cont = 0, voc = 0; 
	for(char c : s){
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
			voc++;
		}
		if(c != ' '){
			cont++;
		}
	}
	cout << voc << " " << cont << endl;
}

int main() {
	int n; 
	cin >> n;
	cin.ignore();
	while(n--) {
		solve();
	} 
	return 0; 
}
