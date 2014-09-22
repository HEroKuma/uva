#include<iostream>
#include<string>
#include<cstring>
#define MAX 676
using namespace std;

int word[MAX],vis[MAX];

void dfs(int);

int main()
{
    int i,N,T;
    string tmp;
    cin>>T;
    while(T--){
        int first;
        cin >> N;
        memset(word,0,sizeof(word));
        for(i = 0 ;i < N; i++){
            int num,last;
            cin >> tmp;
            last = tmp.length()-1;
            num = (tmp[0]-'a')*26 + (tmp[last]-'a');
            word[num]++;
            if(i == 0)
                first = num;
        }

        memset(vis,0,sizeof(vis));
        vis[first] =1 ;
        dfs(first);
        bool right = true;
        for(i = 0 ;i < MAX; i++)
            if(word[i] && !vis[i]){
                right = false;
                break;
            }
        if(!right){
            cout << "The door cannot be opened." << endl;
            continue;
        }

        int front[26] = {0},end[26] = {0};
        for(i = 0 ;i < MAX; i++){
            front[i/26] += word[i];
            end[i%26] += word[i];
        }
        int flag1 = 0,flag2 = 0;
        right = true;
        for(i = 0 ;i < 26; i++){
            if(front[i] == end[i])
                continue;
            else if(front[i] - end[i] == 1)
                flag1++;
            else if(end[i] - front[i] == 1)
                flag2++;
            else{
                right = false;
                break;
            }
            if(flag1 > 1 || flag2 > 1){
                right = false;
                break;
            }
        }
        if(right && (flag1 == 0 && flag2 == 0 || flag1 == 1 && flag2 == 1))
            cout << "Ordering is possible." << endl;
        else
            cout << "The door cannot be opened." << endl;
    }
    return 0;
}

void dfs(int cur)
{
    for(int i = 0 ;i < MAX; i++)
        if(word[i] && !vis[i] && (cur%26 == i/26 || cur/26 == i%26)){
            vis[i] = 1;
            dfs(i);
        }
}
