#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,x;
    cin >> n >> x;

    int num;
    vector<pair<int,int>> nums(n);
    for(int i = 0; i < n; i++){
        cin >> num;
        nums[i] = {num, i + 1};
    }
    
    sort(nums.begin(), nums.end());
    
    for(int p1 = 0; p1 < n-2; p1++){
        int p2 = p1 + 1;
        int p3 = n - 1;
        int x2 = x - nums[p1].first;

        while(p2 < p3){
            if(nums[p2].first + nums[p3].first == x2){
                cout << nums[p1].second << " " << nums[p2].second << " " << nums[p3].second << endl; 
                return 0;
            } 
            else if(nums[p2].first + nums[p3].first > x2) p3--;
            else p2 ++;
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}