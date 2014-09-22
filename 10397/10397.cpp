#include <cstdio>
#include <cmath>
#include <queue>

using namespace std;

const int maxn = 750 + 10;
int N, M, fa[maxn];

struct Point{
    double x;
    double y;
}p[maxn];

double Dis(Point A, Point B){
    return sqrt((A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y));
}

struct node{
    int u;
    int v;
    double dis;
    bool operator < (const node& e) const{
        return dis > e.dis;
    }
};

void init(){
    for(int i = 1; i <= N; i++) fa[i] = i;
}

int Find(int x){
    return fa[x] == x ? x : fa[x] = Find(fa[x]);
}

bool Union(int x, int y){
    int newx = Find(x);
    int newy = Find(y);
    if(newx == newy) return 0;
    fa[newy] = newx;
    return 1;
}

void read(){
    init();
    for(int i = 1; i <= N; i++) scanf("%lf%lf", &p[i].x, &p[i].y);
    scanf("%d", &M);
    int u, v;
    for(int i = 0; i < M; i++){
        scanf("%d%d", &u, &v);
        Union(u, v);
    }
}

void Kruscal(){
    priority_queue<node> pq;
    for(int i = 1; i <= N; i++)
        for(int j = i+1; j <= N; j++)
            pq.push((node){i, j, Dis(p[i], p[j])});
    double ret = 0;
    while(!pq.empty()){
        node no = pq.top(); pq.pop();
        if(Union(no.u, no.v)) ret += no.dis;
    }
    printf("%.2f\n", ret);
}

int main()
{
    while(scanf("%d", &N) == 1){
        read();
        Kruscal();
    }
    return 0;
}
