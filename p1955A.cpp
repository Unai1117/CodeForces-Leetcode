#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while(t-- > 0){
        int n, a, b, count = 0; 
        cin >> n >> a >> b;
        if(n == 1 && a < b){
            cout << a << endl;
        }
        else {
            bool flag = (a * 2) < b;
            while(n > 0){
                    if(n > 1){
                        if(flag){
                            cout << a * n << endl;
                            n = -1; 
                        } else {
                            count += b;
                            n -= 2; 
                        }
                    }
                    if(n == 0){
                        cout << count << endl;
                        n = 0;
                    } else if(n == 1) {
                        cout << count + a << endl;
                        n = 0;
                    }
            }

        }
    }
    return 0; 
}