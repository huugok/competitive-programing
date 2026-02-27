#include <bits/stdc++.h>
using namespace std;

bool isOrdered(vector<int> nums){
    for(int i = 0; i < nums.size() - 1; i++){
        if(!(nums[i] <= nums[i + 1])){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    int n;  
    for(int i = 0; i < t; i++){
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        if(isOrdered(a)){
            cout << n << "\n";
        }else{
            cout << "1" << "\n";
        }
    }

    return 0;
}