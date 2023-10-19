#include <stdio.h>

int main(void) {

    float a = 10.0;
    float b = 5.0;

    float c = a + b;


    printf("Numbers I worked with: %3.1f %3.1f \n", a, b);
    printf("Result of addition: %3.1f \n", c);

    c = a - b;

    printf("Result of subtraction: %3.1f \n", c);

    c = a * b;

    printf("Result of multiplication: %3.1f \n", c);

    c = a / b;

    printf("Result of division: %3.1f \n", c);


    return 0;
}