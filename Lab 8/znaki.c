#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *A="ababaeef", *B="ba", *instance, count=1;
    instance=A;


    while(instance!=NULL)
    {
        instance=strstr(instance, B);
        if(instance)
        {
            printf("The string was found %d times\n", count);
            printf("----------------------------------------------");
            printf("The string found: %s\n", instance);
            count++;
            instance++;
        }
    }
    return 0;
}
