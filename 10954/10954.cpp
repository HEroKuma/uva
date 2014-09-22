#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
using namespace std;

int main()
{
    int size;
    while(scanf("%d",&size))
    {
        if(size==0)
          break;
        else
        {
        int ans;
        std::priority_queue< int, vector<int> , greater<int> >mypq;
        while(size--)
        {
            int temp;
            scanf("%d",&temp);
            mypq.push(temp);
        }
        if(mypq.size() == 1) ans = mypq.top();
        ans=0;
        while(mypq.size() != 1)
        {
            int temp = 0;
            temp+=mypq.top();
            mypq.pop();
            temp+=mypq.top();
            mypq.pop();
            ans+=temp;
            mypq.push(temp);
        }
        printf("%d\n",ans);
        }
    }

    return 0;

}
