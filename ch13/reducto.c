#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int usage_test(char ** command) {
    return 1;
}

int main(int argc, char * argv[]) {
    FILE *in, *out;
    int ch;
    char name[LEN];
    int count = 0;

    if (! usage_test(argv)) {
        puts("Usage error.");
        exit(EXIT_FAILURE);
    }

    if ((in = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Open Error.\n");
        exit(EXIT_FAILURE);
    }

    strncpy(name, argv[1], LEN -5);
    name[LEN - 5] = '\0';
    strcat(name, ".red");

    if((out = fopen(name, "w")) == NULL) {
        fprintf(stderr, "Processing Error.\n");
        exit(3);
    }

    while ((ch = getc(in)) != EOF) {
        if (count++ % 3 == 0) putc(ch, out);
    }

    if ((fclose(in) != 0) || fclose(out) != 0) {
        fprintf(stderr, "Close File Error.\n");
    }

    return 0;
}
