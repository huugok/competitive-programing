#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> a(n);


        int max = 0;
        int aux;
        for(int i = 0; i < n; i++){
            cin >> aux;
            a[i] = aux;
            if(aux > max){
                max = aux;
            }
        } 

        int res = 0;
        for(int i : a){
            if(i == max){
                res++;
            }
        }

        cout << res << "\n";
    }

    return 0;
}