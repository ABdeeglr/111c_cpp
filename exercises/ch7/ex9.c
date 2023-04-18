#include <stdio.h>

int main(int argc, char const *argv[])
{
    int option;
    char ffl;
    while (scanf("%d", &option) == 0) {
        printf("Bad usage, please enter an integer!\n>> ");
        while ((ffl = getchar()) != '\n' && ffl != EOF);
    }
    while ((ffl = getchar()) != '\n' && ffl != EOF);

    // 算了吧，要算素数的！

    return 0;
}
