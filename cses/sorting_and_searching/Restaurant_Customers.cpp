#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int a,b;
    vector<pair<int,int>> customers(2*n);
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        customers.push_back({a,1});
        customers.push_back({b,-1});
    }

    sort(customers.begin(), customers.end());

    int maxCustomers = 0;
    int p = 0;

    for(pair<int,int> x : customers){
        p += x.second;
        maxCustomers = max(maxCustomers,p);
    }

    cout << maxCustomers << "\n";
    return 0;
}