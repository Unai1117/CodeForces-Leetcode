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
	string line; 
	while(getline(cin, line)){
		if(line.length() % 2 == 0){
			string reverse; 
			for(int i = line.length() - 1; i >= 0; --i){
				reverse += line[i]; 
			}
			cout << reverse << endl;
		} else {
			cout << line << endl;
		}
	}
}

int main() {
	solve(); 
	return 0; 
}
