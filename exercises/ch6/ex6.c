#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i, j;
    printf("Enter the start number: ");
    scanf("%d", &i);
    printf("Enter the end number: ");
    scanf("%d", &j);

    for (i; i < j + 1; i++) {
        printf("%d\t%d\t%d\n", i, i*i, i*i*i);
    }
    
    return 0;
}