#include<stdio.h>
#include<stdlib.h>
#define N 100

int check(FILE *file){
    if(file==NULL){
        printf("The operation won't be executed...");
        exit(1);
    }
    return 0;
}


int main(void)
{
    int choice=0;
    char run = 'r';
    char lines[N];
    FILE *file;


    while(run!='q'){

        printf("Pick an operation(to choose, enter either number 1, 2 or 3):\n"
            "1.Save (the program will save witaj studencie... line into your file)\n"
            "2.Put (the program will add ...informatyki line into your file)\n"
            "3.Read (the program will  read the contents of your file)\n"
            "\nSubmit your choice here: ");
        scanf("%d", &choice);


        switch (choice){
            case 1:
                file = fopen("text.txt", "w");
                check(file);
                fprintf(file,"witaj studencie..");
                fclose(file);
                printf("\nYou have successfully saved 'witaj studencie..' line into your file!\n");
                break;

            case 2:
                file = fopen("text.txt", "a");
                check(file);
                fprintf(file,"...informatyki");
                printf("\nYou have added a '...informatyki' line into your file!\n");
                fclose(file);
                break;

            case 3:
                file = fopen("text.txt", "r");
                check(file);
                if(sizeof(lines)>N){
                    printf("Error!");
                    exit(1);
                }
                printf("\nHere is the content of your file:\n");
                while(fscanf(file, "%[^\n]s", lines) != EOF)
                    printf("%s", lines);
                fclose(file);
                break;

            default:
                printf("\nYou have to enter either number 1, 2 or 3 in order to submit your answer!\n");
                return 1;
                break;
        }


        printf("\nWould you like to run your program again?(in order to terminate it press q on your keyboard"
               "if you want to continue then enter whatever you want...I guess): ");
        scanf(" %c", &run);
    }
    return 0;
}
