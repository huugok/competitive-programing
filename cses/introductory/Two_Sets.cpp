#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    long long sum = 0; 
    for(long long i = 1; i <= n; i++) sum += i;

    if(sum%2 == 0){
        cout << "YES" <<"\n";

        long long target = sum/2;
        
        long long sumTarget = 0;
        vector<int> l;
        vector<int> r;
        for(long long i = n; i > 0; i--){
            if(sumTarget + i <= target){
                l.push_back(i);
                sumTarget += i;
            }else{
                r.push_back(i);
            }
        }

        cout << l.size() << "\n";
        for(int i = 0; i < l.size(); i++) cout << l[i] << " ";
        cout << "\n";

        cout << r.size() << "\n";
        for(int i = 0; i < r.size(); i++) cout << r[i] << " ";
        cout << "\n";

    }else{
        cout << "NO" << "\n";
    }

    return 0;
}