#include <bits/stdc++.h>
using namespace std;

int main(){
    int arraySize;
    int targetSum;
    cin >> arraySize;
    cin >> targetSum;
    int nums[arraySize];
    int indexes[arraySize];

    for(int i = 0; i < arraySize; i++){
        cin >> nums[i];
        indexes[nums[i]] = i + 1; 

    }
    return 0;
}