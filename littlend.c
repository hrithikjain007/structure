//little enidian
#include<stdio.h>
struct endian{
        unsigned int var;
};

int little_endian(struct endian v1);
int big_endian(struct endian v1);

int main()
{

        struct endian v1;
        int a;
        printf("Enter the variable :\n");
        scanf("%x",&v1.var);
        printf("Enter the choice :\n");
        scanf("%d",&a);
        switch(a)
        {
                case 1: little_endian(v1);
                        break;
                case 2: big_endian(v1);
                        break;
                default: printf("Invalid choice \n");
                         return 0;
        }

}

int big_endian(struct endian v1)
{
        int i;
        int *p=(int*)&v1.var;
                printf("The Big endian %x",*p++);
}


 int little_endian(struct endian v1)
{
        int i;
        int *p=(int*)&v1.var;
        printf("%x",((v1.var>>24) & 0x000000ff)|((v1.var>>8) & 0x0000ff00)|((v1.var<<8) & 0x00ff0000)|((v1.var<<24) & 0xff000000));
}

