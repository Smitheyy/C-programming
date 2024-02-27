#include <stdio.h>


int main (void) {

    char q1, q2, q3, q4;


    printf("Would you like to talk about our offer? (Enter y - for yes or n - for no):\n");
    scanf(" %c", &q1);



    while (q1 != 'y') {
        if (q1 == 'n') {
            printf("Maybe you'd reconsider? :) (enter y to proceed): \n");
            scanf(" %c", &q1);
        }

        else {
            printf("I'm sorry but in order to submit your answer you have to type either n for no or y for yes :(: \n");
            scanf(" %c", &q1);
        }
    }


    if (q1 == 'y') {
        printf("Okay then. We would like to present to you our offer concerning window blinds, have you ever thought about replacing your current window blinds with the newly refreshed ones? (Enter y - for yes or n - for no):\n");
        scanf(" %c", &q2);



        while (q2 != 'y') {
            if (q2 == 'n') {
                printf("Maybe you'd reconsider? :) (enter y to proceed): \n");
                scanf(" %c", &q2);
            }

            else {
                printf("I'm sorry but in order to submit your answer you have to type either n for no or y for yes :(: \n");
                scanf(" %c", &q2);
            }
        }


        if (q2 == 'y') {
            printf("Great, it seems you are a very resonable person. Our offer includes all carbon blinds, black in colour, that are also equipped with artificial intelligence, for our customers's convenience. Since, with Merely with one tap of your finger, you can control the device wirelessly.On average they cost approximately 100$, but just for you we have lowered the price to just 99$, so my next question is are you interested in buying our product? (Enter y - for yes or n - for no):\n");
            scanf(" %c", &q3);


            while (q3 != 'y') {
                if (q3 == 'n') {
                    printf("Maybe you'd reconsider? :) (enter y to proceed): \n");
                    scanf(" %c", &q3);
                }

                else {
                    printf("I'm sorry but in order to submit your answer you have to type either n for no or y for yes :(: \n");
                    scanf(" %c", &q3);
                }
            }


            if (q3 == 'y') {
                printf("Great, we knew that we would be able to persuade you to buying our product, it's a very good occassion after all. The last step merely includes you giving us an adress to which we will send you your blind, do you consent on doing that? (Enter y - if yes or n - if not):\n");
                scanf(" %c", &q4);

                while (q4 != 'y') {
                    if (q4 == 'n') {
                        printf("Maybe you'd reconsider? :) (enter y to proceed): \n");
                        scanf(" %c", &q4);
                    }

                    else {
                        printf("I'm sorry but in order to submit your answer you have to type either n for no or y for yes :(: \n");
                        scanf(" %c", &q4);
                    }
                }


                if (q4 == 'y') {
                    printf("That's awesome, you're awesome! You can send the adress on your phone number, thank you for your cooperation and have a nice day :)");
                    return 0;
                }
            }
        }
    }


    return 0;
}
