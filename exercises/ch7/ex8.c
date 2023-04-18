#include <stdio.h>
#define BASIC_PROFIT 10.00
#define A_RATE 0.15
#define B_RATE 0.2
#define C_RATE 0.25
#define OVERTIME_WORK 1.5
#define STARS "**********************************"

int main(int argc, char const *argv[])
{
    float num_input;
    char ffl;
    int option;
    float profit;
    float basic_profit;
    float tax = 0;
    float income = 0;

    do {
        puts(STARS);
        printf("Enter the number corresponding to the disered pay rate or action:\n");
        printf("1) $8.75/hr\t\t2) $9.33/hr\n3) $10.00/hr\t\t4) $11.20/hr\n5) quit\n");
        puts(STARS);
        while (scanf("%d", &option) == 0) {
            printf("Bad usage, please enter an integer!\n>> ");
            while ((ffl = getchar()) != '\n' && ffl != EOF);
        }
        while ((ffl = getchar()) != '\n' && ffl != EOF);

        switch (option)
        {
        case 1:
            basic_profit = 8.75;
            printf("OK, you choss $%f/hr.\n", basic_profit);
            break;

        case 2:
            basic_profit = 9.33;
            printf("OK, you choss $%f/hr.\n", basic_profit);
            break;

        case 3:
            basic_profit = 10.00;
            printf("OK, you choss $%f/hr.\n", basic_profit);
            break;

        case 4:
            basic_profit = 11.20;
            printf("OK, you choss $%f/hr.\n", basic_profit);
            break;

        case 5:
            printf("Thanks for use!\n");
            return 0;
        
        default:
            printf("Bad usage: enter a number from 1 to 5!\n\n\n");
            break;
        }
        if (option > 5 || option < 1) continue;


        printf("Enter you working hours this week >> ");
        while (scanf("%f", &num_input) == 0) {
            printf("Bad usage, please enter a number!\n>> ");
            while ((ffl = getchar()) != '\n' && ffl != EOF);
        }
        while ((ffl = getchar()) != '\n' && ffl != EOF);

        if (num_input > 40) {
            num_input = 40 + OVERTIME_WORK * (num_input - 40);
        }

        profit = basic_profit * num_input;
        
        if (profit < 300) {
            tax = A_RATE * profit;
            income = profit - tax;
        } else if (profit < 450) {
            tax = B_RATE * (profit - 300) + 300 * A_RATE;
            income = profit - tax;
        } else {
            tax = B_RATE * 150 + A_RATE * 300 + C_RATE * (profit - 450);
            income = profit - tax;
        }

        printf("Your totally income is $%f.\n", profit);
        printf("You have to pay $%f for tax, and your net income is $%f.\n\n\n", tax, income);

        printf("Enter any key to continue or 5 to quit: ");
        if ((ffl = getchar()) == 5) {
            printf("Thanks for use!\n");
            return 0;
        } 


    } while (1);


    return 0;
}
