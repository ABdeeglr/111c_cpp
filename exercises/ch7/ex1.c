#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    int count_space = 0;
    int count_enter = 0;
    int count_letter = 0;
    while ((ch = getchar()) != '#') {
        switch (ch) {
        case '\n':
            count_enter++;
            break;
        case ' ':
            count_space++;
            break;

        default:
            count_letter++;
            break;
        }
    }

    printf("There is %d spaces.\n", count_space);
    printf("There is %d enters.\n", count_enter);
    printf("There is %d other letters.\n", count_letter);

    return 0;
}
