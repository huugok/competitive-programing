#include <bits/stdc++.h>
using namespace std;

int main(){
    int repeticiones;
    cin >> repeticiones;

    while(repeticiones--){
        int tamaño;
        cin >> tamaño; 
        vector<int> pares;
        vector<int> impares;
        vector<int> unionParImpar(tamaño);

        int contador = 0;
        int numero;
        while(tamaño--){
            cin >> numero;
            if(contador % 2 == 0){
                pares.push_back(numero); 
            } else {
                impares.push_back(numero); 
            }
            contador++;
        }

        sort(pares.begin(), pares.end());
        sort(impares.begin(), impares.end());


        int contadorPar = 0, contadorImpar = 0;
        for(int i = 0; i < repeticiones; i++){
            if(i % 2 == 0){
                unionParImpar[i] = pares[contadorPar++]; 
            } else {
                unionParImpar[i] = impares[contadorImpar++];
            }
        }

        bool sePuedeOrdenar = true;
        for(int i = 0; i < repeticiones; i++){
            if(unionParImpar[i] != i + 1) {
                sePuedeOrdenar = false;
                break;
            }
        }

        if(sePuedeOrdenar) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}