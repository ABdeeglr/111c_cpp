#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j;
    int count = 0;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < i + 1; j++) {
            printf("%c", 65 + count);
            count++;
        }
        printf("\n");
    }
    
    return 0;
}