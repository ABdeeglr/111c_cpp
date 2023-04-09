/**
 * count.c
 */

#include <stdio.h>
#include <stdlib.h>

unsigned long readfile(char * filename) {
    int ch;
    FILE *fp;
    unsigned long count = 0;

    if ((fp = fopen(filename, "r")) == NULL) {
        puts("There is no such file.");
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF) {
        putc(ch, stdout);
        count++;
    }

    fclose(fp);
    return count;
}


int main(int argc, char * argv[]) {

    if (argc != 2) {
        puts("Usage error!");
        return -1;
    }
    
    printf("There are totally %lu words in filr %s.\n",
            readfile(argv[1]), argv[1]);


    printf("Hello!\n");
    return 0;
}
