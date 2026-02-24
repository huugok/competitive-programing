#include <bits/stdc++.h>
using namespace std;

/*int main(){
    long long n;
    cin >> n;
    vector<long long> p(n);

    long long sum = 0;
    long long x;
    for(int i = 0; i < n; i++){
        cin >> x;
        sum += x;
        p[i] = x;
    }

    long long avg = sum/n;

    long long res = 0;
    for(int i = 0; i < n; i++){
        res += abs(p[i] - avg);
    }

    cout << res << "\n";

    return 0;
}*/

int main(){
    long long n;
    cin >> n;
    vector<long long> p(n);

    long long x;
    for(int i = 0; i < n; i++){
        cin >> x;
        p[i] = x;
    }

    sort(p.begin(), p.end());

    long long median;
    if(n%2 == 0){
        median = ((p[n/2] + p[n/2 - 1]) / 2);
    }
    else{
        median = p[n / 2];
    }

    long long res = 0;
    for(int i = 0; i < n; i++){
        res += abs(p[i] - median);
    }

    cout << res << "\n";
    return 0;
}