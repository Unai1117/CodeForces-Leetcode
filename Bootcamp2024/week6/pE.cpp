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

const int dx[] = {-1, 1, 0, 0}; 
const int dy[] = {0, 0, -1, 1}; 

int bfs(const vector<string>& lago, int n, int startX, int startY) {
    queue<pair<int, int>> q; 
    vector<vector<int>> dist(n, vector<int>(n, -1)); 

    q.push({startX, startY}); 
    dist[startX][startY] = 0; 

    while (!q.empty()) {
        int x = q.front().first; 
        int y = q.front().second; 
        q.pop(); 

        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i]; 
            int ny = y + dy[i];

            
            if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                
                if (lago[nx][ny] == 'C') {
                    return dist[x][y] + 1; 
                }
                
                
                if (lago[nx][ny] == '0' && dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[x][y] + 1; 
                    q.push({nx, ny}); 
                }
            }
        }
    }

    return -1; 
}

int main() {
    int n;
    cin >> n;

    vector<string> lago(n);
    int startX, startY;

    for (int i = 0; i < n; ++i) {
        cin >> lago[i];
        for (int j = 0; j < n; ++j) {
            if (lago[i][j] == 'R') {
                startX = i; 
                startY = j; 
            }
        }
    }
    int saltos = bfs(lago, n, startX, startY);
    cout << saltos << endl;

    return 0;
}