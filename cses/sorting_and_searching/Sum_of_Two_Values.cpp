#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;

    int ai;
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; i++){
        cin >> ai;
        a[i] = {ai, i + 1};
    }

    sort(a.begin(), a.end());

    int l = 0;
    int r = n - 1;

    while(l < r){
        if(a[l].first + a[r].first == x){
            cout << a[l].second << " " << a[r].second << "\n";
            return 0;
        } 
        else if(a[l].first + a[r].first >= x) r--;
        else l++;
    }

    cout << "IMPOSSIBLE" << "\n";
    return 0;
}