//structure string
#include<stdio.h>
#include<stdlib.h>

struct st
{
        char c;
};

void pass(struct st **);
int  main()
{
        int i,j;
        char t;

        struct st *q[5],s[5]={'h','e','l','l','o'};

        for(i=0;i<5;i++)
        {
                q[i]=(struct st *)malloc(sizeof(struct st));
                q[i]->c=s[i].c;

        }


        pass( q);

}
void pass(struct st **s)
{
        int i,j;
        char t;
        for(i=0;i<5;i++)
        {
                for(j=0;j<5;j++)
                        if(s[i]->c<s[j]->c)
                        {
                                t=s[i]->c;
                                s[i]->c=s[j]->c;
                                s[j]->c=t;
                        }


        }
        for(i=0;i<5;i++)
                printf("%c",s[i]->c);

}
