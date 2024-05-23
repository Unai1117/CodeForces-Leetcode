#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, m, h, x, y; 
    cin >> n >> m >> h >> x >> y;
    vector<vector<int>> a(n, vector<int>(m));
    int maxH = 0; 
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            maxH = max(maxH, a[i][j]);
        }
    }//llenamos y buscamos el maximo

    int sx = 0, sy = 0, dist = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] + h > maxH){
                int curr_dist = abs(x - i) + abs(y - j);
                if(curr_dist < dist){
                    dist = curr_dist;
                    sx = i;
                    sy = j;
                }
            }
        }
    }
    cout << sx << " " << sy << endl;
}