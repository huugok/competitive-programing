#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int repeticiones;
    cin >> repeticiones;
    while(repeticiones--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int &x : nums) cin >> x;

        vector<int> ideal(n);
        for(int j = 0; j < n; j++) ideal[j] = n - j;

        int pos1 = 0;
        while(pos1 < n && nums[pos1] == ideal[pos1]) pos1++;

        if(pos1 < n){
            int pos2 = pos1;
            while(nums[pos2] != ideal[pos1]) pos2++;

            reverse(nums.begin() + pos1, nums.begin() + pos2 + 1);
        }

        for(int &y : nums) cout << y << " ";
        cout << "\n";
    }
    return 0;
}