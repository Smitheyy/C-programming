#include <stdio.h>

int main(void) {
    int x = 21;
    int y = 3;

    int z =  x + y;


    printf("Numbers I worked with: %d %3d \n", x, y);
    printf("Result of addition: %d \n", z);

    z = x - y;

    printf("Result of subtraction: %d \n", z);

    z = x * y;

    printf("Result of multiplication: %d \n", z);

    z = x / y;

    printf("Result of division: %d", z);


    return 0;
}
