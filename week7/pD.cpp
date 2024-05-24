#include <bits/stdc++.h>
using namespace std;

long long res, comb;

int getPurity(char c){
    switch(c){
        case 'A': return 8;
        case 'B': return 5;
        case 'C': return 4;
        case 'D': return 3;
        default: return 0;
    }
}

void combinations(map<char,int> &m, char a, char b){
    int used; 
    if(m[a] > 0 && m[b] > 0){
        if(m[a] > m[b]){
            used = m[b];
            m[a] -= used;
            m[b] = 0;
            res += getPurity(a) * getPurity(b) * used;
            comb += used;
        } else {
            used = m[a];
            m[b] -= used;
            m[a] = 0;
            res += getPurity(a) * getPurity(b) * used;
            comb += used;
        }
    }
}

int main(){
    map<char, int> m; 
    int t, a, b, c, d; 
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d; 
        m['A'] = a;
        m['B'] = b;
        m['C'] = c;
        m['D'] = d;
        res = comb = 0;
        combinations(m, 'A', 'B');
        combinations(m, 'A', 'C');
        combinations(m, 'A', 'D');
        combinations(m, 'B', 'C');
        combinations(m, 'B', 'D');
        combinations(m, 'C', 'D');
        cout << comb << " " << res << endl;
    }
}