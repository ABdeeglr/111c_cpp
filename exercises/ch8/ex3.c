#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char ch;

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') continue;

        if (islower(ch)) {
            printf("%c is a lower letter.\n", ch);
        } else if (isupper(ch)) {
            printf("%c is a upper letter.\n", ch);
        } else {
            puts("I don't know.");
        }
    }

    return 0;
}
