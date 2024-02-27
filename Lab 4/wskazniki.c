#include <stdio.h>

int main(void) {
    int a, b, *ptr_a, *ptr_b;
    float c, d, *ptr_c, *ptr_d;
    char e, f, *ptr_e, *ptr_f;

    ptr_a = &a;
    ptr_b = &b;

    ptr_c = &c;
    ptr_d = &d;

    ptr_e = &e;
    ptr_f = &f;

    printf("1.Integers:\n");
    printf("Enter a number:\n");
    scanf(" %d", &a);

    printf("Enter the second number:\n");
    scanf(" %d", &b);
    printf("\n");

    printf("2.Float numbers:\n");
    printf("Enter the third number:\n");
    scanf(" %f", &c);

    printf("Enter the fourth number:\n");
    scanf(" %f", &d);
    printf("\n");

    printf("3.Characters\n");
    printf("Enter the first character:\n");
    scanf(" %c", &e);
    printf("\n");

    printf("Enter the second character:\n");
    scanf(" %c", &f);
    printf("\n");


    printf("The result of adding two integers a and b is equal to: \n%d\n", (*ptr_a + *ptr_b));
    printf("The result of subtracting two integers a and b is equal to: \n%d\n", (*ptr_a - *ptr_b));
    printf("The result of multiplying two float numbers c and d is equal to: \n%f\n", (*ptr_c * *ptr_d));
    printf("The result of 'logical or' operation on two characters e and f is equal to: \n%c\n", (*ptr_e | *ptr_f));


    return 0;
}
