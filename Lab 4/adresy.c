#include <stdio.h>

int main(void) {
    int a, b, c, *ptr_a, *ptr_b, *ptr_c;
    ptr_a = &a;
    ptr_b = &b;
    ptr_c = &c;

    printf("Adresses of variables a, b and c:\n");
    printf("\n%p\n", ptr_a);
    printf("\n%p\n", ptr_b);
    printf("\n%p\n", ptr_c);
    printf("\n");

    printf("Adresses of variables ptr_a, ptr_b and ptr_c:\n");
    printf("\n%p\n", &ptr_a);
    printf("\n%p\n", &ptr_b);
    printf("\n%p\n", &ptr_c);


    return 0;
}
