#include <stdio.h>

int main(void) {

    int choice = 0;

    double base = 0; //the base

    int exp = 0; //the exponent

    double power = 0.0; //the power
    
    int i = 0;

    do {

        base = 0;

        exp = 0;

        power = 1;

        printf("\n\n -- Enter 1 to find power of number");
        printf("\n -- Enter 0 for quit from program");

        printf("\n\n -- Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) {

            printf("\n\n -- Enter the base: ");
            scanf("%lf", &base);

            printf("\n -- Enter the exponent: ");
            scanf("%d", &exp);

            if( base < 1 || exp < 1) {
                printf("the base or exponent is < 1");
            } else {

                for(i = 0; i < exp; i++) {
                    power = power * base;
                }

                printf("\n\n -- %.2f^%d = %.2f ", base, exp, power);

            }


        } else if(choice == 0) {
            printf("\n\n -- Bye Bye! --");
        } 
        else {
            printf("\n\n -- Invalid Choice --");
        }

    } while(choice != 0);

    return 0;
}
