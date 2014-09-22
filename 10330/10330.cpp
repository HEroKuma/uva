#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
#define MAX 110

using namespace std;

int c[MAX],g[MAX][MAX];
int flow[MAX][MAX];
int d[MAX],p[MAX],vis[MAX],f;
int n,m;

void bfs();

int main()
{
    int i,j;
    while(scanf("%d",&n)!=EOF){
        for(i = 1 ;i <= n; i++){
            scanf("%d",&c[i]);
        }
        scanf("%d",&m);
        int a,b,v;
        memset(g,0,sizeof g);
        for(i = 1 ;i <= m; i++){
            scanf("%d%d%d",&a,&b,&v);
            g[a][b] = v;
        }
        scanf("%d%d",&a,&b);
        for(i = 1 ;i <= a; i++){
            scanf("%d",&v);
            g[0][v] = 1 << 30;
        }
        for(i = 1 ;i <= b; i++){
            scanf("%d",&v);
            g[v][n+1] = 1 << 30;
        }
        c[0] = c[n+1] = 1 << 30;
        bfs();
        printf("%d\n",f);
    }
    return 0;
}

void bfs()
{
    queue<int> q;
    memset(flow,0,sizeof flow);
    f = 0;
    for(;;){
        memset(d,0,sizeof d);
        q.push(0);
        d[0] = 1 << 30;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            int tt;
            for(int v = 0 ;v <= n+1; v++){
                if ((!d[v]) && g[u][v] > flow[u][v] && flow[u][v] < c[v] && flow[u][v] < c[u]){
                    p[v] = u;
                    q.push(v);
                    d[v] = d[u];
                    //cout<<v<<" pp "<<endl;
                    if(d[u] > g[u][v] - flow[u][v]){
                        d[v] = g[u][v] - flow[u][v];
                    }
                    if(d[u] > c[v] - flow[u][v]){
                        d[v] = min(d[v],c[v] - flow[u][v]);
                    }
                    if(d[u] > c[u] - flow[u][v]){
                        d[v] = min(d[v],c[u] - flow[u][v]);
                    }
                }
            }
        }
        if(d[n+1] == 0)
            break;
        //int tt;
        for(int u = n+1 ;u != 0; u = p[u]){
            flow[p[u]][u] += d[n+1];
            //flow[u][p[u]]-=d[n+1];
            // cout<<p[u]<<" "<<u<<" "<<flow[p[u]][u]<<endl;
            // cin>>tt;
        }
        f += d[n+1];
    }
}
