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

int solve(vector<pair<int, int>>& points) {
    unordered_map<int, int> x_count, y_count;
    unordered_map<int, unordered_map<int, int>> x_y_count; 

    for(const auto& point : points){
        int x = point.first;
        int y = point.second;
        x_count[x]++;
        y_count[y]++;
        x_y_count[x][y]++;
    }

    int right_triangle_count = 0;
    for(const auto& point : points){
        int x = point.first;
        int y = point.second;

        int count_x = x_count[x]-1;
        int count_y = y_count[y]-1;
        right_triangle_count += count_x * count_y;
    }
    return right_triangle_count;
}

int main() {
    int t; cin >> t;
    while(t--){
	    int n; 
        cin >> n;
        vector<pair<int, int>> points(n); 
        for(int i = 0; i < n; ++i){
            cin >> points[i].first >> points[i].second;
        }
        cout << solve(points) << endl;
    }
	return 0; 
}
