#include <stdio.h>
#define PSQR(x) printf("The square of " #x " is %d.\n", ((x) * (x)))

int main(void) {
    int y = 5;

    PSQR(y); // => printf("The square of " "y" " is %d.\n", ((y) * (y)));
    PSQR(2 + 4); // => printf("The square of " "2 + 4" " is %d.\n", ((2 +  4) * (2 + 4)));

    return 0;
}
