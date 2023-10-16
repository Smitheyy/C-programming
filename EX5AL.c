#include<stdio.h>

int main(void)
{
    int i = 1;
    int a = 5;
    int b = 5;

    while(a > i)
    {
        int j;

        for(j = i; j < b+i; j++)
        {
            printf("%d", j);
        }
        
        printf("\n");
        a-=1;
    }

    return 0;

}