#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> k(n);
    for(int i = 0; i < n; i++) cin >> k[i];

    unordered_map<int,int> last;
    last.reserve(n);

    int l = 0;
    int res = 0;

    for(int r = 0; r < n; r++){
        if(last.count(k[r]) && last[k[r]] >= l){
            l = last[k[r]] + 1;
        }

        last[k[r]] = r;
        res = max(res, r - l + 1);
    }

    cout << res << "\n";
}