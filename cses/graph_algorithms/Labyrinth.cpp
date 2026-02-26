#include <bits/stdc++.h>
using namespace std;

int n,m;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

vector<string> grid;
vector<vector<bool>> visited;


void bfs(int x, int y){
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    grid.resize(n);
    visited.assign(n, vector<bool>(m, false));

    for(int i = 0; i < n; i++) cin >> grid[i];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 'A'){
                bfs(i,j);
            }
        }
    }
    return 0;
}