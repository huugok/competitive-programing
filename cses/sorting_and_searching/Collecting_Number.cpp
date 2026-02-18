#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> pos(n); 

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
        pos[nums[i] - 1] = i; 
    }

    int rounds = 1; 
    for(int i = 1; i < n; i++) {
        if(pos[i] < pos[i-1]) {
            rounds++; 
        }
    }

    cout << rounds << endl;
    return 0;
}