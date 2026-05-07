#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n{};
    cin >> n;

    vector<int> ni(n - 1);
    for(int i = 0; i < n-1; i++) cin >> ni[i];

    int aux{};
    vector<int> pos(n, 0);
    for(int i = 0; i < n-1; i++)
    {
        aux = ni[i];
        pos[aux-1]++;
    }

    for(int i = 0; i < n; i++)
    {
        if(pos[i] == 0) cout << i+1 << "\n";
    }
    return 0;
}