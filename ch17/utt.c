#include <stdio.h>

void pass(int *);

int main(int argc, char const *argv[])
{
    int i = 123211;
    int * lambda = &i;
    char * wdq = "frwdnbefregwfqe";
    char * wdqwdq[] = {"qdwwger", "fwerg", "FWervgq"};
    char s[8];
    s[0] = '1';
    s[1] = '1';
    s[2] = '1';
    s[3] = '1';
    s[4] = '1';
    s[5] = '1';
    s[6] = '1';
    s[7] = '1';
    printf("%s", s);
    printf("\n");

    return 0;
}

void pass(int * num) {
    printf("num >> %p\n", num);
    printf("num >> %d\n", *num);
}
