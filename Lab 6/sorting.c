#include <stdio.h>

int main(void)
{
    int tab[7]={2,8,9,15,7,4,10};
    int i,l,storage;

    printf("Unsorted array:\n");
    for(i=0;i<7;i++)
        printf("%4d", tab[i]);


    for(i=0;i<7;i++){
        for(l=0;l<6;l++)
        {
            if(tab[l]>tab[l+1])
            {
                storage = tab[l];
                tab[l]=tab[l+1];
                tab[l+1]=storage;
            }
        }
    }


    printf("\nArray sorted in ascending order:\n");
    for(i=0;i<7;i++)
        printf("%4d", tab[i]);

    return 0;
}
