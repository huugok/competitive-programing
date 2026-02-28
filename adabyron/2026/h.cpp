#include <bits/stdc++.h>
using namespace std;

string revertir(string s){
    int n = s.length() - 1;

    for(int i = 0; i < n/2; i++){
        char aux = s[i];
        s[i] = s[n - i];
        s[n - i] = aux;
    }

    return s;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string nombre;
    while(getline(cin, nombre)){
        if(nombre.empty()) continue;

        int t;
        cin >> t;

        int sum = 0;
        int sumR = 0;
        while(t--){
            string num;
            cin >> num;

            sum += stoi(num);
            sumR += stoi(revertir(num));
        }

        if(sum > sumR){
            cout << "Se puede confiar en " << nombre << "\n";
        }else if(sum == sumR){
            cout << nombre << " es equidistante" << "\n";
        }else{
            cout << nombre << " no es una persona honesta" << "\n";
        }

        //cin.ignore();
    }

    return 0;
}