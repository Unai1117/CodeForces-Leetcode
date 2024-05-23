#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n , h, m; cin >> n;
    n %= 1440;
    h = (12 + n / 60) % 24;
    m = n % 60;
    cout << h/10 << h%10 << ':' << m/10 << m%10 << endl;
}