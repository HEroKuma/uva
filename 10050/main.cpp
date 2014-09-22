#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
 
int main()
{
    char line[100000];
    while(gets(line))
    {
        int length=strlen(line);
        int i;
        int word=0;
        int inword=0;
        for(i=0;i<length;i++)
            if(isalpha(line[i])&&!inword)
            {
                word++;
                inword=1;
            }
            else if(!isalpha(line[i]))
                inword=0;
        printf("%d\n",word);
    }
    return 0;
}
