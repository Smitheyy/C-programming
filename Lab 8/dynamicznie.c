#include <stdio.h>
#include <stdlib.h>
#define E 10


int Insert_element(int tab[],int number)
{
    int i;
    for(i=0;i<E;i++)
    {
        if(number==0)
        {
            printf("You can't add number zero into the array!");
            return 0;
        }
        if(tab[i]==0)
        {
            tab[i]=number;
            return(tab[i]);
            break;
        }
    }
    return 0;
}


int Delete_element(int tab[], int number)
{
    int k;

    for(k=0;k<E;k++)
    {
        if (number==0)
        {
            printf("I'm sorry but there is nothing there :(");
            return 0;
        }
        if(tab[k]==number)
        {
            printf("Here is a number that you have deleted: %d\n", tab[k]);
            tab[k]=0;
            return (tab[k]);
        }
    }
    return 0;
}


int Get_element(int tab[], int number)
{
    int i;
    for(i=0;i<E;i++)
    {
        if(tab[i]==number)
            printf("Here is your element: %d\n", tab[i]);
    }
    return 0;
}


int Display_tab(int tab[])
{
    int i;
    for(i=0;i<E;i++)
        printf("%d\n", tab[i]);
    return 0;
}



int main(void)
{
    int *tab, j;
    tab=malloc(sizeof(int)*E);

    for(j=0;j<E;j++)
        tab[j]=0;

    printf("Here is your table without any elements (except zeros which you are not allowed to add):\n");
    Display_tab(tab);
    Insert_element(tab, 1);
    Insert_element(tab, 41);
    Insert_element(tab, 30);
    Insert_element(tab, 20);
    Insert_element(tab, -2);
    Insert_element(tab, 12);
    Insert_element(tab, 10);
    Insert_element(tab, 8);
    Insert_element(tab, 7);
    Insert_element(tab, 120);
    printf("\nHere is your table after inserting few elements:\n");
    Display_tab(tab);

    printf("\nHere is your table after deleting one element from it:\n");
    Delete_element(tab, 120);
    Display_tab(tab);

    printf("\nAn Element that you want to display from the table:\n");
    Get_element(tab,7); /*An element that we want to get from our array*/
    free(tab);

    return 0;
}
