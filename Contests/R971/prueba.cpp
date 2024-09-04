#include <iostream>
#include <cmath>
using namespace std;


bool can_reach(int x, int y, int k, int moves) {

    int x_moves = (moves + 1) / 2;
    int y_moves = moves / 2;
    

    long long max_x = 1LL * x_moves * k;
    long long max_y = 1LL * y_moves * k;
    
    return max_x >= x && max_y >= y;
}

int min_moves(int x, int y, int k) {
    int low = 1, high = 1000000;  
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (can_reach(x, y, k, mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    
    return low;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;
        
        cout << min_moves(x, y, k) << endl;
    }
    
    return 0;
}
