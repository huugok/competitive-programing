#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t{}, m{}, p{}, n{};
    cin >> t;
    while (t--)
    {
        cin >> m >> p;
        cin >> n;

        int sum{}, aux{};
        for(int i = 0; i < n; i++)
        {
            cin >> aux;
            sum += aux;
        }

        if(n > m) cout << "No cabemos" << "\n";
        else if(sum > (p * m)) cout << "Nos quedamos atrapados" << "\n";
        else cout << "Todo bien" << "\n";
    }
    
    return 0;
}