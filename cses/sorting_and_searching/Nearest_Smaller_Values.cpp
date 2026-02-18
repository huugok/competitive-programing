#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    vector<int> res(n);
    vector<int> x(n); 
    for(int i = 0; i < n; i++) cin >> x[i];

    stack<pair<int,int>> st;
    for(int i = 0; i < n; i++){
        while(!st.empty() && st.top().first >= x[i]) st.pop();
        if(st.empty()) res[i] = 0;
        else res[i] = st.top().second;
        st.push({x[i], i + 1});
    }

    for(int i = 0; i < n; i++){cout << res[i] << " ";}
    cout << endl;
    return 0;
}