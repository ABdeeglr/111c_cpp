#include <stdio.h>
#define BASIC_PROFIT 10.00
#define A_RATE 0.15
#define B_RATE 0.2
#define C_RATE 0.25
#define OVERTIME_WORK 1.5

int main(int argc, char const *argv[])
{
    printf("Enter you working hours this week >> ");
    float num_input;
    char ffl;

    while (scanf("%f", &num_input) == 0) {
        printf("Bad usage, please enter a number!\n>> ");
        while ((ffl = getchar()) != '\n' && ffl != EOF);
    }
    

    if (num_input > 40) {
        num_input = 40 + OVERTIME_WORK * (num_input - 40);
    }

    float profit = BASIC_PROFIT * num_input; // 工资总额
    float tax = 0;
    float income = 0;
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
    printf("You have to pay $%f for tax, and your net income is $%f.\n", tax, income);
    


    
    return 0;
}
