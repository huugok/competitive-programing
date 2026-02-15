#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n;
    cin >> n;
    vector<unsigned long long> nums(n -1);

    unsigned long long suma = n * (n+1)/2;
    for(long long j = 0; j < n-1; j++){
        long long num;
        cin >> num;
        nums[j] = num;
    }
    unsigned long long sumaNums = accumulate(nums.begin(), nums.end(), (unsigned long long)0);

    unsigned long long res = suma - sumaNums;
    cout << res << endl;
    return 0;
}