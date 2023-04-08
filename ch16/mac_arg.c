#include <stdio.h>
#define SQUARE(X) X*X
#define PR(X) printf("The result is %d.\n", X)

int main(void) {
    int x = 5;
    int z;

    printf("x = %d\n", x);
    z = SQUARE(x); // => z = x*x;
    printf("Evaluating SQUARE(x): ");
    PR(z); // => printf("The result is %d.\n", z);
    z = SQUARE(2); // => z = 2 * 2;
    printf("Evaluating SQUARE(x+2): ");
    PR(SQUARE(x + 2)); // => printf("The result is %d.\n", x + 2*x + 2);
    printf("Evaluating 100 / SQUARE(2): ");
    PR(100 / SQUARE(2)); // => printf("The result is %d.\n", 100 / 2*2);
    printf("Evaluating SQUARE(++x): ");
    PR(SQUARE(++x)); // => printf("The result is %d.\n", ++x*++x);
    printf("After incrementing, x is %x.\n", x);

    return 0;
}
