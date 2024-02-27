#include <stdio.h>

int add(int *a, int *b, int *result)
{
    *result = *a + *b;
    return (*result);
}

int subtract(int *c, int *d, int *result)
{
    *result = *c - *d;
    return (*result);
}

int multiply(int *a, int *b, int *result)
{
    *result = *a * *b;
    return (*result);
}


int main(void)
{
    int num_1, num_2, result;
    printf("Enter the first number:\n");
    scanf(" %d", &num_1);
    printf("Enter the second number:\n");
    scanf(" %d", &num_2);


    printf("%d + %d = %d\n", num_1, num_2, add(&num_1, &num_2, &result));
    printf("%d - %d = %d\n", num_1, num_2, subtract(&num_1, &num_2, &result));
    printf("%d * %d = %d\n", num_1, num_2, multiply(&num_1, &num_2, &result));

    return (0);
}
