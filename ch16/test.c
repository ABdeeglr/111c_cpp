#include <stdio.h>

int main(void) {

    printf("%s is defined on %s.\n",
            __FILE__, __DATE__);

    printf("This compiler is version of %ld.\n", __STDC_VERSION__);
    printf("This translation is operated on %s.\n", __TIME__);

    return 0;
}
