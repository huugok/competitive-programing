#include <bits/stdc++.h>
using namespace std;
using ull = long long;

int main(){
    ull l{}, maxLength{};
    string cadena;
    cin >> cadena;
    vector<int> nums(128,0);

    for(ull r{}; r < cadena.length(); r++){
        char c = cadena[r];

        if(cadena[r] != cadena[l]){
            l = r;
        }
        nums[c] = r;
        maxLength = max(maxLength, r - l +1);
    }
    cout << maxLength << endl;
    return 0;
}
    