#include<iostream>

using namespace std;

int m,n;
char grid[110][110];
void dfs(int,int);

int main()
{
    while(cin >> m >> n && (m && n)){
        for(int i = 0 ;i < m; i++)
            for(int j = 0 ;j < n; j++)
                cin >> grid[i][j];
        int ans = 0;
        for(int i = 0 ;i < m; i++){
            for(int j = 0 ;j < n; j++){
                if(grid[i][j] == '@'){
                    dfs(i,j);
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
/*
        for(int i = 0 ;i < m; i++){
            for(int j = 0 ;j < n; j++){
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
*/

    return 0;
}

void dfs(int x,int y)
{
    if((x < m && y < n) && grid[x][y] == '@'){
        grid[x][y] = '*';
        dfs(x+1,y);
        dfs(x-1,y);
        dfs(x,y+1);
        dfs(x,y-1);
        dfs(x+1,y+1);
        dfs(x-1,y-1);
        dfs(x+1,y-1);
        dfs(x-1,y+1);
    }
    return;
}
