#include <stdio.h>


void Push(int *stack[], int *top, int* number){
    if(*top==7){
        printf("\nOverflow! You can't add more than 8 numbers to the stack!\n");
        printf("Number \"%d\" won't be added into the stack\n", *number);
    }
    else if(*top!=7){
        *top+=1;
        stack[*top]=number;
    }
}


void Pop(int *stack[], int *top, int *x){
    if (*top==-1)
        printf("\nUnderflow!\n");

    if (*x!=*stack[*top]){
         printf("You can't remove variables other than the top one!\n");
         printf("Pop procedure won\'t be executed!\n");
         return;
    }


    *x=*stack[*top];
    *top-=1;
    printf("\nYou have successfully removed number \"%d\" from the stack\n", *x);
}


void Display(int *stack[], int *top){
    int j;
    printf("Here is your stack:\n");
    for(j=*top;j<=*top;j--)
        printf("%d\n", *stack[j]);
}


int main(void)
{
    int n1=1;
    int n2=2;
    int n3=3;
    int n4=4;
    int n5=5;
    int n6=6;
    int n7=7;
    int n9=9;
    int *stack[8];
    int top=-1;
    int x;

    Push(stack, &top, &n1);
    Push(stack, &top, &n3);
    Push(stack, &top, &n4);
    Push(stack, &top, &n2);
    Push(stack, &top, &n5);
    Push(stack, &top, &n6);
    Push(stack, &top, &n9);
    Push(stack, &top, &n7);
    Push(stack, &top, &n7);
    Pop(stack, &top, &n5);
    Display(stack, &top);

    return 0;
}
