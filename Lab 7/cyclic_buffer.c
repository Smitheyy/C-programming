#include <stdio.h>


void Save(int *buffer[], int *head, int *tail, int number) {
    int position=(*head + 1)%8;

    if (position==*tail) {
        printf("The buffer is full!\n");
        return;
    }

    *buffer[*head]=number;
    *head=position;
}


void Read(int *buffer[], int *head, int *tail, int *read) {

    if (*tail==*head) {
        printf("Buffer is empty!\n");
        return;
    }

    *read=*buffer[*tail];
    buffer[*tail]=NULL;
    *tail=(*tail + 1)%8;
}


void Display(int *buffer[]) {
    int i;
    for (i=0; i<8; i++) {
        if(buffer[i])
            printf("%d\n", *buffer[i]);
        else
            printf("NULL\n");
    }
}



int main(void) {
    int numbers[8]={1,3,4,2,5,6,9,7};
    int *buffer[8];
    int head=0;
    int tail=0;
    int j;
    int read;

    for (j=0; j<8; j++)
        buffer[j]=&numbers[j];


    Save(buffer, &head, &tail, numbers[0]);
    Save(buffer, &head, &tail, numbers[1]);
    Save(buffer, &head, &tail, numbers[2]);

    Read(buffer, &head, &tail, &read);
    printf("Number read: %d\n", read);

    Save(buffer, &head, &tail, numbers[3]);
    Save(buffer, &head, &tail, numbers[4]);
    Save(buffer, &head, &tail, numbers[5]);
    Read(buffer, &head, &tail, &read);
    Save(buffer, &head, &tail, numbers[6]);
    Save(buffer, &head, &tail, numbers[7]);

    Read(buffer, &head, &tail, &read);
    printf("Second number read: %d\n", read);

    printf("Your buffer:\n");
    Display(buffer);

    return 0;
}
