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
	int N; 
	cin >> N;
	for(int i = 1; i <= N; ++i){
		if(i % 3 == 0 && i % 5 == 0){
			cout << "FizzBuzz" << endl; 
		} else if(i % 3 == 0){
			cout << "Fizz" << endl; 
		} else if(i % 5 == 0){
			cout << "Buzz" << endl; 
		} else {
			cout << i << endl; 
		}
	}
}

int main() {
	solve(); 
	return 0; 
}
