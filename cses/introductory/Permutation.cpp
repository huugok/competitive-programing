#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    if(n == 1){
        cout << n << "\n";
    }
    else if(n > 3){
        int contador = 0;
        vector<int> x(n);

        for(int i = 2; i < n + 1; i += 2){
            x[contador] = i;
            contador++;
        }

        for(int i = 1; i <= n; i += 2){
            x[contador] = i;
            contador++;
        }
        
        for(int i = 0; i < n; i++){
            cout << x[i] << " ";
        }

        cout << "\n";

    }else{
        cout << "NO SOLUTION" << "\n";
    }

    return 0;
}