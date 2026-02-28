#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vu = vector<ll>;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    vu x(n);
    for(ll i = 0; i < n; i++) cin >> x[i]; 
    
    ll res = 0;
    ll max = x[0];
    for(ll i = 1; i < n; i++){
        if(x[i] > max){
            max = x[i];
        }else{
            res += max - x[i];
        }
    }

    cout << res << "\n";
    return 0;
}