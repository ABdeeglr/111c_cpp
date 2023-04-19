#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

double add();
double sub();
double mul();
double divide();

int main(int argc, char const *argv[])
{      
    char ch;
    printf("Enter the operation of your choice:\n");
    printf("a. add\ts. subtract\nm. multiply\td. divide\nq. quit\n");
    while ((ch = getchar()) != EOF) {
        switch (ch)
        {
        case 'a':
            printf("The answer is %lf\n", add());
            break;
        
        case 's':
            printf("The answer is %lf\n", sub());
            break;

        case 'd':
            printf("The answer is %lf\n", divide());
            break;

        case 'm':
            printf("The answer is %lf\n", mul());
            break;

        case 'q':
            printf("Bye.\n");
            ch = 254;
            break;
        
        default:
            ch = 255;
            break;
        }

        if (ch == 255) {
            printf("Bad Usage! Enter \"a|s|m|d|q\" as parameter.\n");
            continue;
        } else if (ch == 254)
        {
            break;
        }
        

        printf("Enter the operation of your choice:\n");
        printf("a. add\ts. subtract\nm. multiply\td. divide\nq. quit\n");
    }
    
    return 0;
}

double add() {
    double a, b;
    printf("Enter the first number: ");
    char ffl;
    while (scanf("%lf", &a) == 0) {
            printf("Bad usage, please enter a number!\n>> ");
            while ((ffl = getchar()) != '\n' && ffl != EOF);
        }
    while ((ffl = getchar()) != '\n' && ffl != EOF);

    printf("Enter the second number: ");
    while (scanf("%lf", &b) == 0) {
            printf("Bad usage, please enter a number!\n>> ");
            while ((ffl = getchar()) != '\n' && ffl != EOF);
        }
    while ((ffl = getchar()) != '\n' && ffl != EOF);

    return a + b;
}


double sub() {
    double a, b;
    printf("Enter the first number: ");
    char ffl;
    while (scanf("%lf", &a) == 0) {
            printf("Bad usage, please enter a number!\n>> ");
            while ((ffl = getchar()) != '\n' && ffl != EOF);
        }
    while ((ffl = getchar()) != '\n' && ffl != EOF);

    printf("Enter the second number: ");
    while (scanf("%lf", &b) == 0) {
            printf("Bad usage, please enter a number!\n>> ");
            while ((ffl = getchar()) != '\n' && ffl != EOF);
        }
    while ((ffl = getchar()) != '\n' && ffl != EOF);

    return a - b;
}


double mul() {
    double a, b;
    printf("Enter the first number: ");
    char ffl;
    while (scanf("%lf", &a) == 0) {
            printf("Bad usage, please enter a number!\n>> ");
            while ((ffl = getchar()) != '\n' && ffl != EOF);
        }
    while ((ffl = getchar()) != '\n' && ffl != EOF);

    printf("Enter the second number: ");
    while (scanf("%lf", &b) == 0) {
            printf("Bad usage, please enter a number!\n>> ");
            while ((ffl = getchar()) != '\n' && ffl != EOF);
        }
    while ((ffl = getchar()) != '\n' && ffl != EOF);

    return a * b;
}


double divide() {
    double a, b;
    printf("Enter the first number: ");
    char ffl;
    while (scanf("%lf", &a) == 0) {
            printf("Bad usage, please enter a number!\n>> ");
            while ((ffl = getchar()) != '\n' && ffl != EOF);
        }
    while ((ffl = getchar()) != '\n' && ffl != EOF);

    printf("Enter the second number: ");
    while (scanf("%lf", &b) == 0) {
            if (b == 0) {
                printf("ERROR: divided by 0.\nPlease enter a number!\n>> ");
                continue;
            }
            printf("Bad usage, please enter a number!\n>> ");
            while ((ffl = getchar()) != '\n' && ffl != EOF);
        }
    while ((ffl = getchar()) != '\n' && ffl != EOF);

    return a / b;
}