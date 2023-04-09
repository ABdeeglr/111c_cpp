#include <stdio.h>

int main(void) {
    FILE * fp1;
    FILE * fp2;

    fp1 = fopen("count.c", "r");
    fp2 = fopen("count.c", "r");

    printf("<%p> ? <%p> \n", fp1, fp2);
    fclose(fp1);
    fclose(fp2);

    return 0;
}
