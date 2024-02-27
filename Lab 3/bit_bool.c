#include <stdio.h>


int main(void) {
    int a, b;
    char stop = 'd';

    while (stop != 'q') {
        printf("Choose the first number: \n");
        scanf(" %d", &a);

        printf("Choose the second number: \n");
        scanf(" %d", &b);

        printf("Operation a || b = %d \n", a || b);
        printf("Operation a | b = %d \n", a | b);
        printf("Operation a && b = %d \n", a && b);
        printf("Operation a & b = %d \n", a & b);

        printf("Do you want to run the program again? (if not press q key on your keyboard, if yes then enter anything you want besides q):\n");
        scanf(" %c", &stop);
    }
    return 0;
}
