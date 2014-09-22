#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
using namespace std;

int main()
{
 int n;
 std::queue<int> myqueue;
 while(scanf("%d",&n))
 {
    if(n==0)
     break;
    else
    {
     int i=1;
     for(i;i<=n;i++)
     {
        myqueue.push(i);
     }
     /*while(!myqueue.empty())
     {
         printf("%d\n",myqueue.front());
         myqueue.pop();
     }*/
     printf("Discarded cards:");
     while(myqueue.size()!=1)
     {
       if(myqueue.size()==2)
           printf(" %d",myqueue.front());
       else
           printf(" %d,",myqueue.front());
       myqueue.pop();
       myqueue.push(myqueue.front());
       myqueue.pop();
     }
     printf("\nRemaining card: %d\n",myqueue.front());
    }
    while(!myqueue.empty())
    {
        myqueue.pop();
    }
 }

 return 0;
}
