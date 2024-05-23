#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; 
    cin >> n >> m;
    vector<queue<string>> q(m+1); 

    char c; 
    int x; 
    string name; 
    for(int i = 0; i < m; ++i){
        cin >> c; 
        if(c == 'a'){
            cin >> x >> name; 
            q[x].push(name);
        } else if(c == 'o'){
            cin >> x; 
            if(q[x].empty()){
                cout << "- No hay nadie en la fila " << x << endl;
            } else {
                name = q[x].front();
                q[x].pop();
                cout << "- Atendiendo a " << name << endl; 
            }
        } else {
            cin >> x;
            int t = q[x].size();
            cout << "- Personas en la fila " << x << ": " << t << endl; 
        }
    }

    int total = 0;
    for(int i = 0; i < m; ++i){
        total += q[i].size();
    }
    cout << "Personas por atender: " << total << endl;
    return 0;
}