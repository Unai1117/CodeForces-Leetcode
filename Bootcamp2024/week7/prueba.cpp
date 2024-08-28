#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<char> simplificar_camino(int n, vector<char>& instrucciones) {
    stack<char> pila;
    
    for (int i = 0; i < n; ++i) {
        char instruccion = instrucciones[i];
        
        if (!pila.empty()) {
            char ultima = pila.top();
            if ((ultima == 'F' && instruccion == 'B') || 
                (ultima == 'B' && instruccion == 'F') || 
                (ultima == 'L' && instruccion == 'R') || 
                (ultima == 'R' && instruccion == 'L')) {
                pila.pop(); // Cancelar la última instrucción
            } else {
                pila.push(instruccion); // Añadir nueva instrucción
            }
        } else {
            pila.push(instruccion); // Añadir la primera instrucción
        }
    }
    
    // Transferir el contenido de la pila a un vector para generar la salida
    vector<char> resultado;
    while (!pila.empty()) {
        resultado.push_back(pila.top());
        pila.pop();
    }
    
    // Invertir el vector para tener la secuencia en orden correcto
    reverse(resultado.begin(), resultado.end());
    
    return resultado;
}

int main() {
    int n;
    cin >> n;
    vector<char> instrucciones(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> instrucciones[i];
    }
    
    vector<char> resultado = simplificar_camino(n, instrucciones);
    
    for (char c : resultado) {
        cout << c << ' ';
    }
    cout << endl;
    
    return 0;
}
