#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<long long> res;
    long long num;

    cin >> num;
    res.push_back(num);

    while(num != 1){
        if((num%2) == 0){
            num = num/2;
        }
        else{
            num = num*3+1;
        }
        res.push_back(num);    
    }

    for(long long &x : res){cout << x << " ";}
    cout << "\n"; 
    return 0;
}