#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
int main(){
    ull a, b, n;

    while(cin >> a >> b >> n){
        cout << ((a % n) + (b % n)) % n << endl;
    }

    return 0;
}
