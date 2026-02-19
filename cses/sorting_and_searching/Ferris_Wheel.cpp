#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, x;
    int res = 0;
    cin >> n >> x;

    vector<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];

    sort(p.begin(), p.end());

    int l = 0;
    int r = n - 1; 
    while (l <= r){
        if(p[l] + p[r] <= x) l++;
        r--;
        res++;
    } 

    cout << res << endl;
    return 0;
}