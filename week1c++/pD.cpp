#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    int c; 

    cin >> n;
    cin >> c;

    if(n % c == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
