#include <stdio.h>
#include <stdlib.h>

typedef struct Figures{
    float side_a;
    float side_b;
    float area;
    char color[50];
    char border;
    char fill;
} figures;

float Area(figures *figure, int choice){
    float fig_area = 0;
    if (choice == 1) {
        fig_area = figure->side_a * figure->side_b;
    } else if (choice == 2) {
        fig_area = (figure->side_a * figure->side_b) / 2;
    } else if (choice == 3) {
        fig_area = 3.14 * (figure->side_a * figure->side_a);
    }
    return fig_area;
}

float Sum_of_areas(figures *tab, int size){
    float sum = 0;
    int j;
    for (j = 0; j < size; j++)
        sum += tab[j].area;
    return sum;
}

void Check_border(figures *num_borders, int size, int *border_counter){
    int k;
    for (k = 0; k < size; k++) {
        if (num_borders[k].border == 'y')
            (*border_counter)++;
    }
}

int main(void) {
    int size = 0, count = 0, border_counter = 0, choice = 0, i;
    figures *tab;

    printf("How many figures do you want? (Enter a whole number from 1 to infinity):\n");
    scanf("%d", &size);
    printf("You will have %d figures to fill with data!\n", size);

    tab = malloc(sizeof(figures) * size);

    for (i = 0; i < size; i++) {
        printf("\nEnter the values of side a:\n");
        scanf("%f", &tab[i].side_a);
        printf("\nEnter the value of side b:\n");
        scanf("%f", &tab[i].side_b);
        printf("\nEnter the color of your figure:\n");
        scanf("%s", tab[i].color);
        printf("\nDoes it have a border (enter n if not, and if it does enter y):\n");
        scanf(" %c", &tab[i].border);
        printf("\nDoes your figure have filling? (enter n if not, and if it does enter y)\n");
        scanf(" %c", &tab[i].fill);
        count++;

        printf("\n------------------------------------------------------------------------------------\n");
        printf("\nPick what type of figure you'd like (enter a number from 1-3):\n");
        printf("1. Rectangle\n");
        printf("2. Triangle\n");
        printf("3. Circle\n");
        printf("Enter your choice here: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nRectangle %d data: {a=%.2f x b=%.2f, color:%s, border?:%c, filling?:%c, area: %.2f}",
                       count, tab[i].side_a, tab[i].side_b, tab[i].color, tab[i].border, tab[i].fill, Area(&tab[i], choice));
                tab[i].area = Area(&tab[i], choice);
                break;
            case 2:
                printf("\nTriangle %d data: {a=%.2f x h=%.2f, color:%s, border?:%c, filling?:%c, area:%.2f}",
                       count, tab[i].side_a, tab[i].side_b, tab[i].color, tab[i].border, tab[i].fill, Area(&tab[i], choice));
                tab[i].area = Area(&tab[i], choice);
                break;
            case 3:
                printf("\nCircle %d data: {r=%.2f, color:%s, border?:%c, filling?:%c, area:%.2f}",
                       count, tab[i].side_a, tab[i].color, tab[i].border, tab[i].fill, Area(&tab[i], choice));
                tab[i].area = Area(&tab[i], choice);
                break;
            default:
                printf("Your choice was not submitted!");
                free(tab);
                return 0;
        }
        printf("\n------------------------------------------------------------------------------------\n");
    }

    printf("\nSum of areas: %.2f\n", Sum_of_areas(tab, size));

    Check_border(tab, size, &border_counter);
    printf("\nThe number of figures with the border: %d\n", border_counter);

    free(tab);
    return 0;
}
