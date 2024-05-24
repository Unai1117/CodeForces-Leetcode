#include <bits/stdc++.h>
using namespace std;

int solve(string& s, int i, int j){
    if(j - i == 1){
        if(s[i] == 'O') return 1;
        else return 0;
    }
    int counter = 0; 
    for(int k = i; k < j; k++){
        if(s[k] == 'O') counter++;
    }
    if(counter == 0) return 0;
    else if(counter == j - i) return counter; 

    return max(solve(s, i, (j + i)/2), solve(s, (j + i)/2, j));
}

int main(){
    int l; 
    cin >> l;
    string s;
    cin >> s;
    cout << solve(s, 0, l) << endl;
}