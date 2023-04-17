#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, k=27;
    char ch;
    printf("Enter a letter >>");
    ch = getchar();
    
    char letters[26] = {'A', 'B', 'C', 'D', 'E', 'F',
                        'G', 'H', 'I', 'J', 'K', 'L',
                        'M', 'N', 'O', 'P', 'Q', 'R',
                        'S', 'T', 'U', 'V', 'W', 'X',
                        'Y', 'Z'};
    for (i = 0; i < 26; i++) {
        if (*(letters + i) == ch) {
            k = i+1;
            break;
        }
    }

    if (k == 27) {
        puts("Bad usage. Enter a capital letter from A to Z");
        return 0;
    }

    for (i = 1; i < k+1; i++) {
        for (j = 0; j < k-i; j++) {
            printf(" ");
        }
        for (j = 1; j < i + 1; j++) {
            printf("%c", j+64);
        }
        for (j = i-1; j > 0; j--) {
            printf("%c", j+64);
        }
        printf("\n");
    }
    
    return 0;
}