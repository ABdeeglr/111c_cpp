#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // char* word;
    // printf("Enter a word: ");
    // scanf("%s", word); // 在这里写入了地址不明确的指针，引发了段错误
    // puts("OK");

    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);

    int i;
    for (i = strlen(word); i > 0 ; i--) {
        printf("%c", *(word+i-1));
    }
    printf("\n");
    
    return 0;
}