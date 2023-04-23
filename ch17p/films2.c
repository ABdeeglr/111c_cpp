#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i = 1, j = 1;

    printf("i++ >> %d\n++i >> %d\n", i++, ++j);
    scanf("%d", &i);

    return 0;
}