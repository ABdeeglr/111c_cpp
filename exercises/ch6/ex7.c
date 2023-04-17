#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char* word = "";
    printf("Enter a word: ");
    fgets(word, 22, stdin);
    puts("OK");

    int i;
    for (i = 0; i < strlen(word); i++) {
        printf("%p\n", word+i);
    }
    printf("\n");
    
    return 0;
}