#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t-->0){
        int a, b; 
        cin >> a >> b; 
        if(a == b){
            cout << "YES" << endl;  
        } else if(a < b){
            cout << "NO" << endl;
        } else if((a-b) % 2 == 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;  
}