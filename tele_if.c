#include <stdio.h>


int main (void) {

    char q1, q2, q3, q4;


    printf("Would you like to talk about our offer? (Enter y - for yes or n - for no):\n");
    scanf(" %c", &q1);


    if (q1 == 'y') {
        printf("Okay then. We would like to present to you our offer concerning window blinds, have you ever thought about replacing your current window blinds with the newly refreshed window blinds? (Enter y - for yes or n - for no):\n");
        scanf(" %c", &q2);


        if (q2 == 'y') {
            printf("Great, it seems you are a very resonable person. Our offer includes all carbon blinds, black in colour, they also use artificial intelligence for our customers's convenience to shut themselves down. Merely with with one tap on your phone screen, you can control the whole blind. It costs on average approximately 100$, but just for you we have lowered the price to just 99$, so my next question is are you interested in buying our product? (Enter y - for yes or n - for no):\n");
            scanf(" %c", &q3);


            if (q3 == 'y') {
                printf("Great, we know that we will be able to persuade you to buying our product, it's a very good occassion after all. The last step merely includes you giving us an adress on which we will send you your blind, do you consent on doing that? (Enter y - if yes or n - if not):\n");
                scanf(" %c", &q4);

                if (q4 == 'y') {
                    printf("That's awesome, you're awesome! You can send the adress on your phone number, thank you for your cooperation and have a nice day :)");
                    return 0;
                }

                else if (q4 == 'n') {
                    printf("All right, have a nice day!");
                    return 0;
                }

                else {
                    printf("I'm sorry, but you've got to enter either y or n (yes or no) in order to submit your answer, also these letters have to be lower case.");
                    return 0;
                }
            }

            else if (q3 == 'n') {
                printf("All right, have a nice day!");
                return 0;
            }

            else {
                printf("I'm sorry, but you've got to enter either y or n (yes or no) in order to submit your answer, also these letters have to be lower case.");
                return 0;
            }
        }

        else if (q2 == 'n') {
            printf("All right, have a nice day!");
            return 0;
        }

        else {
            printf("I'm sorry, but you've got to enter either y or n (yes or no) in order to submit your answer, also these letters have to be lower case.");
            return 0;
        }
    }

    else if (q1 == 'n') {
        printf("All right, have a nice day!");
        return 0;
    }

    else {
        printf("I'm sorry, but you've got to enter either y or n (yes or no) in order to submit your answer, also these letters have to be lower case.");
        return 0;
    }

    return 0;
}   