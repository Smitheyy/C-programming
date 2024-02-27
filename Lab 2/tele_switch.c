#include <stdio.h>

int main (void) {
    char q1, q2, q3, q4;

    printf("Would you like to talk about our offer? (Enter y - for yes or n - for no):\n");
    scanf(" %c", &q1);

    switch (q1)
    {
    case 'y':
        printf("Okay then. We would like to present to you our offer concerning window blinds, have you ever thought about replacing your current window blinds with the newly refreshed ones? (Enter y - for yes or n - for no):\n");
        scanf(" %c", &q2);
        break;

    case 'n':
        printf("All right, have a nice day!");
        return 0;

    default:
        printf("I'm sorry, but you've got to enter either y or n (yes or no) in order to submit your answer, also these letters have to be lower case.");
        return 0;
        break;
    }


    switch (q2)
    {
    case 'y':
        printf("Great, it seems you are a very resonable person. Our offer includes all carbon blinds, black in colour, that are also equipped with artificial intelligence, for our customers's convenience. Since, with Merely with one tap of your finger, you can control the device wirelessly.On average they cost approximately 100$, but just for you we have lowered the price to just 99$, so my next question is are you interested in buying our product? (Enter y - for yes or n - for no):\n");
        scanf(" %c", &q3);
        break;

    case 'n':
        printf("All right, have a nice day!");
        return 0;

    default:
        printf("I'm sorry, but you've got to enter either y or n (yes or no) in order to submit your answer, also these letters have to be lower case.");
        return 0;
        break;
    }


    switch (q3)
    {
    case 'y':
        printf("Great, we knew that we would be able to persuade you to buying our product, it's a very good occassion after all. The last step merely includes you giving us an adress to which we will send you your blind, do you consent on doing that? (Enter y - if yes or n - if not):\n");
        scanf(" %c", &q4);
        break;

    case 'n':
        printf("All right, have a nice day!");
        return 0;

    default:
        printf("I'm sorry, but you've got to enter either y or n (yes or no) in order to submit your answer, also these letters have to be lower case.");
        return 0;
        break;
    }


    switch (q4)
    {
    case 'y':
        printf("That's awesome, you're awesome! You can send the adress on your phone number, thank you for your cooperation and have a nice day :)");
        return 0;
        break;

    case 'n':
        printf("All right, have a nice day!");
        return 0;

    default:
        printf("I'm sorry, but you've got to enter either y or n (yes or no) in order to submit your answer, also these letters have to be lower case.");
        return 0;
        break;
    }


    return 0;
}

/* We could write the program in just one swtich, but we'd [probably] be required to use if/else statements in order to execute that,
therefore I used four switches instead of one */
