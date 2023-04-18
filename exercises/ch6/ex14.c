#include <stdio.h>

int main(int argc, char const *argv[])
{
    double count[8];
    char ffl; // 该变量用于刷新缓冲区
    int i = 0;
    printf("Enter 8 numbers\n");
    for (i = 0; i < 8; i++) {
        printf(">> ");
        while (scanf("%lf", &count[i]) == 0) {
            printf("Bad usage, please enter an integer!\n>> ");
            while ((ffl = getchar()) != '\n' && ffl != EOF);
        }
    }

    double sums[8] = {count[0]};
    for (i = 1; i < 8; i++) {
        sums[i] = sums[i-1]+count[i];
    }
    
    for(i = 0; i < 8; i++) {
        printf("%lf ", count[i]);
    }
    printf("\n");
    for(i = 0; i < 8; i++) {
        printf("%lf ", sums[i]);
    }
    printf("\n");
    


    return 0;
}
