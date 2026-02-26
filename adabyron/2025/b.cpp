#include <bits/stdc++.h>
using namespace std;

int primeFactor(int n){
    int max = INT_MIN;

    while(n%2 == 0){
        max = 2;
        n /= 2;
    }

    for(int i = 3; i * i <= n; i++){
        if(n%i == 0){
            max = i;
            n /= i;
        }
    }

    if(n > 1) max = n;

    return max;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    while(cin >> a >> b){
        if(primeFactor(a) == primeFactor(b)){
            cout << "True" << endl;
        }else{
            cout << "False" << endl;
        }
    }
    return 0;
}