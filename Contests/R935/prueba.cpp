#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; // number of test cases
    cin >> t;
    
    while (t--) {
        int n; // number of houses
        cin >> n;
        string a;
        cin >> a;
        
        vector<int> prefixZeros(n + 1, 0);  // Prefix sum for zeros
        vector<int> suffixOnes(n + 1, 0);   // Suffix sum for ones

        // Build prefix sum for zeros
        for (int i = 1; i <= n; i++) {
            prefixZeros[i] = prefixZeros[i - 1] + (a[i - 1] == '0' ? 1 : 0);
        }
        
        // Build suffix sum for ones
        for (int i = n - 1; i >= 0; i--) {
            suffixOnes[i] = suffixOnes[i + 1] + (a[i] == '1' ? 1 : 0);
        }
        
        int bestPosition = -1;
        int bestDistance = n + 1;

        for (int i = 0; i <= n; i++) {
            int leftCount = i;
            int rightCount = n - i;
            
            // ⌈leftCount/2⌉ zeros should be on the left side
            int requiredLeftZeros = (leftCount + 1) / 2;
            // ⌈rightCount/2⌉ ones should be on the right side
            int requiredRightOnes = (rightCount + 1) / 2;
            
            // Check if both conditions are satisfied
            if (prefixZeros[i] >= requiredLeftZeros && suffixOnes[i] >= requiredRightOnes) {
                int currentDistance = abs(i - n / 2);
                if (currentDistance < bestDistance) {
                    bestDistance = currentDistance;
                    bestPosition = i;
                }
            }
        }
        
        cout << bestPosition << "\n";
    }
    
    return 0;
}
