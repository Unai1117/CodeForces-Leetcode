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

void solve() {
	int n; 
	cin >> n;
	cin.ignore();

	queue<char> q0, q1, q2; 

	for(int i = 0; i < 3; ++i){
		string s; 
		getline(cin, s);
		istringstream iss(s);
		char c; 
		while(iss >> c){
			if(i == 0) q0.push(c); 
			else if(i == 1) q1.push(c); 
			else q2.push(c);
		}
	}

	string line; 
	while(getline(cin, line)){
		istringstream iss(line);
		string op; 
		int origen, destino; 
		char per; 

		iss >> op; 
		if(op == "MOVER"){
			iss >> origen >> destino; 
			if(origen == 0 && !q0.empty()){
				per = q0.front(); 
				q0.pop(); 
				if(destino == 1){q1.push(per);} 
				else if(destino == 2) {q2.push(per);}
			} else if(origen == 1 && !q1.empty()){
				per = q1.front(); 
				q1.pop();
				if(destino == 0) {q0.push(per);} 
				else if(destino == 2){q2.push(per);}
			} else if(origen == 2 && !q2.empty()){
				per = q2.front(); 
				q2.pop(); 
				if(destino == 0) {q0.push(per);} 
				else if(destino == 1) {q1.push(per);}
			}
		} else if(op == "AGREGAR"){
			iss >> per >> destino; 
			if(destino == 0) {q0.push(per);} 
			else if(destino == 1) {q1.push(per);} 
			else q2.push(per);
		} else if(op == "ATENDER"){
			iss >> origen; 
			if(origen == 0 && !q0.empty()){
				q0.pop(); 
			} else if(origen == 1 && !q1.empty()){
				q1.pop(); 
			} else if(origen == 2 && !q2.empty()){
				q2.pop(); 
			}
		}
	}

	if(q0.empty()) {
		cout << "NO HAY NADIE" << endl;
	}
	else {
		while(!q0.empty()){
			cout << q0.front() << " "; 
			q0.pop(); 
		}
		entf; 
	}

	if(q1.empty()) cout << "NO HAY NADIE" << endl;
	else {
		while(!q1.empty()){
			cout << q1.front() << " "; 
			q1.pop(); 
		}
		entf; 
	}
	if(q2.empty()) cout << "NO HAY NADIE" << endl;
	else {
		while(!q2.empty()){
			cout << q2.front() << " "; 
			q2.pop(); 
		}
		entf;
	}
}

int main() {
	solve(); 
	return 0; 
}
