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

vector<char> solve(int n, vector<char>& inst){
	stack<char> p; 
	
	for(int i = 0; i < n; ++i){
		char c = inst[i];

		if(!p.empty()){
			char top = p.top();
			if((top == 'F' && c == 'B') ||
				(top == 'B' && c == 'F') ||
				(top == 'L' && c == 'R') ||
				(top == 'R' && c == 'L')) {
				p.pop();
			} else {
				p.push(c);
			}
		} else {
			p.push(c);
		}
	}

	vector<char> res; 
	while(!p.empty()){
		res.push_back(p.top());
		p.pop();
	}

	reverse(res.begin(), res.end());
	return res; 
}

int main() {
	int n; 
	cin >> n;
	vector<char> inst(n);
	for(int i = 0; i < n; ++i){
		cin >> inst[i];
	}

	vector<char> res = solve(n, inst);

	for(char c : res){
		cout << c << ' ';
	}
	entf; 

	return 0;
}
