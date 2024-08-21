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

int startX, startY, endX, endY; 
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
vector<string> maze;
int W, H; 

int solve(int x, int y) {
	if(x == endX && y == endY) return 1;

	maze[x][y] = '#';

	for(int i = 0; i < 4; ++i){
		int nx = x + dx[i];
		int ny = y + dy[i];

		if(nx >= 0 && nx < H && ny >= 0 && ny < W && (maze[nx][ny] == '.' || maze[nx][ny] == 'S')){
			int res = solve(nx, ny);
			if(res > 0) return res + 1;
		}
	}

	return 0; 
}

int main() {
	cin >> W >> H;
	maze.resize(H);

	for(int i = 0; i < H; ++i){
		cin >> maze[i];
		for(int j = 0; j < W; ++j){
			if(maze[i][j] == 'E'){
				startX = i; 
				startY = j; 
			}
			if(maze[i][j] == 'S'){
				endX = i; 
				endY = j; 
			}
		}
	}

	int res = solve(startX, startY);
	cout << res << endl;
	return 0;
}