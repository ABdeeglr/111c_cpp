#include <stdio.h>
#include <math.h>
#define PR(X, ...) printf("Message " #X ": " __VA_ARGS__)

/**
 * Example for __VA_ARGS__
 * 
 * ORIGINNAL: `#define PR(...) printf(__VA_ARGS__)`
 * 
 * PR("Howdy"); => printf("Howdy");
 * PR("weight = %d, shipping = $%.2f\n", wt, sp) 
 *  ==> printf("weight = %d, shipping = $%.2f\n", wt, sp)
 */

int main(void) {
    double x = 48;
    double y;
    
    y = sqrt(x);

    // According to the example, expression below will be transferd...
    PR(1, "x = %g\n", x); // => printf("Message" "1" ": " "x = %g\n", x);
    PR(2, "x = %.2f, y = %.4f\n", x, y); // => printf("Message" "2" ": " "x = %.2f, y=%.4f\n", x, y);
                                         // I am right. But it is still ugly.

    return 0;
}
