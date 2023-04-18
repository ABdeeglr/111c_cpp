#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count;
    float sumA = 0;
    float sumB = 0;
    int index;
    char ffl; // 该变量用于刷新缓冲区
    printf("Enter the count >> ");
    while (scanf("%d", &count) == 0) {
        printf("Bad usage, please enter an integer!\n>> ");
        while ((ffl = getchar()) != '\n' && ffl != EOF);
    }

    for (index = 1; index < count + 1; index++) {
        sumA += (float) 1 / (index+1);
    }

    for (index = 1; index < count + 1; index++) {
        if (index % 2 == 0) {
            sumB -= (float) 1 / index;
        } else {
            sumB += (float) 1 / index;
        }
    }

    printf("Sum A is %f\nSum B is %f\n", sumA, sumB);
    return 0;
}
