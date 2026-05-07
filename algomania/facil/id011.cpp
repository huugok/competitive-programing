#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n, cont;
    cin >> t;
    while(t--)
    {      
        cont = 0;
        cin >> n;
        while(n != 1)
        {
            cont++;

            if(n%3 == 0) n = n/3;
            else n--;
        }
        cout << cont << "\n";
    }

    return 0;
}