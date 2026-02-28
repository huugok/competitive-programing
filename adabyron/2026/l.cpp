#include <bits/stdc++.h>
using namespace std;

long long a, b, t0, t1, k;
map<long long, long long> memo;

long long fibb(long long n){
    if(n == 0){
        return t0 % k;
    }else if(n == 1){
        return t1 % k;
    }else if(memo.find(n) != memo.end()){
        return memo[n];
    }else{
        memo[n] = (a * fibb(n - 1) + b * fibb(n - 2)) % k;
        return memo[n];
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while(cin >> a >> b >> t0 >> t1 >> k) {
        memo.clear();  
        long long res = fibb(100);
        cout << res << "\n";
    }
    return 0;
}