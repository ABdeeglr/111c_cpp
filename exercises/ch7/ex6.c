#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch1;
    char ch2 = '\0';
    int count = 0;

    printf("Enter you sentence: ");
    while ((ch1 = getchar()) != '#') {
        if (ch1 == 'i' && ch2 == 'e') count++;
        ch2 = ch1;
    }

    printf("There are %d \"ei\" in your input.\n", count);

    return 0;
}
