#include <bits/stdc++.h>
using namespace std;

int main(){
    int reps, n, num;
    cin >> reps;
    while(reps--){
        bool iSsixSeven = false;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> num;
            if(num == 67){iSsixSeven = true;}
        }
        if(iSsixSeven){cout << "YES" << endl;}
        else{cout << "NO" << endl;}
    } 
    return 0;
}