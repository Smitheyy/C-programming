#include <stdio.h>


typedef struct liczba{
    int a;
    float b;
}N;


int main(void)
{
    int num_of_structs = 0, i;
    N data;
    FILE *file = fopen("B.bin", "wb");

    printf("How many structures would you like to save into your file?:\n");
    scanf("%d", &num_of_structs);


    if(file == NULL){
        printf("Your file cannot be opened for saving...\n");
        return 1;
    }

    for(i = 0; i<num_of_structs;i++){
        printf("\nSTRUCTURE %d:\n", i+1);
        printf("\nEnter the first number of your structure(integer):\n");
        scanf("%d", &data.a);
        printf("\nEnter the second number of your structure(float):\n");
        scanf(" %f", &data.b);
        fwrite(&data, sizeof(data), 1, file);
    }

    fclose(file);
    return 0;
}
