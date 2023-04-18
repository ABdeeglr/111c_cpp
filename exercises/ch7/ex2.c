#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    int i = 0;
    while ((ch = getchar()) != '#') {
        if (i % 8 == 0) {
            printf("\n");
        }
        printf("%d ", ch);
        i++;
    }

    return 0;
}
