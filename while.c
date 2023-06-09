#include <stdio.h>

int main(void) {
    printf("\n=======================\n");
    printf("While loop tutorial!\n");

    int userContinue = 1;
    int loopCounter = 0;
    while(userContinue) { //condition, other coding languages -> while(true)
        //main code
        loopCounter = 0;
        printf("I am in the while loop.\n");
        while(loopCounter < 5) {
            printf("Hello!\n");
            loopCounter++;
        }
        //main code
        printf("Do you want to restart the program? (1 - yes, 0 - no)\n");
        scanf("%d", &userContinue);
    }
    printf("\n=======================\n\n");
    return 0;
}