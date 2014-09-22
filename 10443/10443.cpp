#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int comp(char c1, char c2)
{
    if(c1==c2) return 0;
    if(c1-c2!=3 && c1>c2||c2-c1==3) return -1;
    return 1;
}

char reverse(char c1)
{
    if (c1=='S') return 'R';
    if (c1=='R') return 'P';
    return 'S';
}

int main()
{
    int d,r,c,t;
    int i,j,k,isRev;
    char ch;

    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d %d",&r,&c,&d);
        char change[d+1][r][c+1];
        for(i=0;i<r;i++)
            scanf("%s",change[0][i]);
        for(k=1;k<=d;k++)
            for(i=0;i<r;i++)
                for(j=0;j<c;j++)
                {
                    isRev=0;
                    ch=change[k-1][i][j];
                    if(i-1>=0&&comp(ch,change[k-1][i-1][j])==-1)
                        isRev=1;
                    if(j-1>=0&&comp(ch,change[k-1][i][j-1])==-1)
                        isRev=1;
                    if(i+1<r&&comp(ch,change[k-1][i+1][j])==-1)
                        isRev=1;
                    if(j+1<c&&comp(ch,change[k-1][i][j+1])==-1)
                        isRev=1;
                    if(isRev)change[k][i][j]=reverse(ch);
                    else change[k][i][j]=ch;
                }
        for(i=0;i<r;i++)
            change[d][i][c]='\0',printf("%s\n",change[d][i]);
        
        if(t) printf("\n");
            
    }
    return 0;
}
