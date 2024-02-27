#include <stdio.h>

int add(int a, int b)
{
    return (a+b);
}

int subtract(int a, int b)
{
    return (a-b);
}

int multiply(int a, int b)
{
    return (a*b);
}


int main(void)
{
    int num_1, num_2;
    printf("Enter the first number:\n");
    scanf(" %d", &num_1);
    printf("Enter the second number:\n");
    scanf(" %d", &num_2);


    printf("%d + %d = %d\n", num_1, num_2, add(num_1, num_2));
    printf("%d - %d = %d\n", num_1, num_2, subtract(num_1, num_2));
    printf("%d * %d = %d\n", num_1, num_2, multiply(num_1, num_2));


    return (0);
}
