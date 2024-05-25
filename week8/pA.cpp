#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    long long arr[n];
    cin >> arr[0] >> arr[1] >> arr[2];
    
    for(int i = 3; i < n; i++){
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
}
