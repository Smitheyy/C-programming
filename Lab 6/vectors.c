#include <stdio.h>

int Add(int tab1[], int tab2[], int result[])
{
    int i;
    printf("The result of adding two vectors together is equal to:\n");
    for(i=0;i<3;i++){
        result[i] = tab1[i]+tab2[i];
    }
    return 0;
}

int Subtract(int tab1[], int tab2[], int result[])
{
    int i;
    printf("\nThe result of subtracting two vectors together is equal to:\n");
    for(i=0;i<3;i++){
        result[i] = tab1[i]-tab2[i];
    }
    return 0;
}

int Multiply(int tab1[], int tab2[], int result[]){
    int i;
    printf("\nThe result of multiplying two vectors is equal to:\n");
    for(i=0;i<3;i++){
        result[i] = tab1[i]*tab2[i];
    }
    return 0;
}

int main(void)
{
    int tab1[3]={7,5,9};
    int tab2[3]={3,4,7};
    int result[3];
    int n, sum=0;

    Add(tab1, tab2, result);
    for(n=0;n<3;n++)
        printf("%4d", result[n]);

    Subtract(tab1,tab2,result);
    for(n=0;n<3;n++)
        printf("%4d", result[n]);

    Multiply(tab1,tab2,result);
    for(n=0;n<3;n++)
        sum+=result[n];
    printf("%4d", sum);
    return 0;
}
