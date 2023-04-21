#include <stdio.h>

void pass(int *);

int main(int argc, char const *argv[])
{
    int i = 13;
    pass(&i);

    return 0;
}

void pass(int * num) {
    printf("num >> %p\n", num);
    printf("num >> %d\n", *num);
}
