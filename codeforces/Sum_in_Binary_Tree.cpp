#include <bits/stdc++.h>
using namespace std;

int main(){
    long long reps, index, sum;
    cin >> reps;
    for(int i{}; i < reps; i++){
        cin >> index;
        sum = 0;
        while(index != 1){
            sum += index;
            index = index / 2;
        }
        sum += 1;
        cout << sum << endl;
    }
    
    return 0;
}