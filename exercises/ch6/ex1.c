#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a[26] = {'a', 'b', 'c', 'd', 'e', 'f',
                  'g', 'h', 'i', 'j', 'k', 'l',
                  'm', 'n', 'o', 'p', 'q', 'r',
                  's', 't', 'u', 'v', 'w', 'x',
                  'y', 'z'};
    
    int count = 0;

    for (count = 0; count < 26; count++) {
        printf("%c ", *(a + count));
    }
    printf("\n");

    return 0;
}
