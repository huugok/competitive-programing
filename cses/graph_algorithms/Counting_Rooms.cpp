#include <bits/stdc++.h>
using namespace std;

int n, m;

int dx[4]{-1, 1, 0, 0};
int dy[4]{0, 0, -1, 1};

vector<string> grid;
vector<vector<bool>> visited;

void dfs(int i, int j){
    visited[i][j] = true;

    for(int k = 0;k < 4; k++){
        int ni = i + dx[k];
        int nj = j + dy[k];
        if(ni >= 0 && ni < n && nj >= 0 && nj < m){
            if(grid[ni][nj] == '.' && !visited[ni][nj]){
                dfs(ni,nj);
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    grid.resize(n);
    visited.assign(n, vector<bool>(m, false));
    for(int i = 0; i < n; i++) cin >> grid[i];

    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == '.' && !visited[i][j]){
                res++;
                dfs(i,j);
            }
        }
    }

    cout << res << "\n";
    return 0;
}