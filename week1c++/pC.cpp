#include <iostream>
#include <bits/stdc++.h> //esto sirve para importar todos los EDAs
using namespace std;

bool isVowel(char c){
    c |= 32; 
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(){
    int n; 
    int a; 
    cin >> n; 
    for(int i = 0; i < n; i++){
        cin >> a; 
        cout << a * 2 << ' '; 
    }
    cout << "\n"; 

    char c; 
    cin >> n; 
    for(int i = 0; i < n; i++){
        cin >> c; 
        cout << (char)(c&(~32)) << ' ';
    }
    cout << "\n"; 

    string s; 
    cin >> n;{
        for(int i = 0; i < n; i++){
            cin >> s; 
            for(int j = 0; j < s.size(); j++){
                if(isVowel(s[j])) s[j] = '0';
                cout << s[j]; 
            }
            cout << ' ';
        }
    }
    cout << endl; 
}
