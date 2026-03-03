#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const long long MOD = 1e9 + 7;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    ll res = 1;
    for(int i = 0; i < n; i++){
        res = (res * 2) % MOD;
    }

    cout << res << "\n";

    return 0;
}