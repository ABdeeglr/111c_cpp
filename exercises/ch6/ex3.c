#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < i + 1; j++) {
            printf("%c", 70-j);
        }
        printf("\n");
    }
    
    return 0;
}
