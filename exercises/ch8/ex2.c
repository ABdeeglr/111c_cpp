#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    char ch;
    while ((ch = getchar()) != EOF) {
        if (ch < 32) {
            printf("\\%d-%d", ch, ch);
        } else if (ch == '\n') {
            printf("\\n-%d ", ch);
        } else if (ch == '\t') {
            printf("\\n-%d ", ch);
        } else {
            printf("%c-%d", ch, ch);
        }
        
    }
    
    return 0;
}

int count_file(const char* filename) {
    int count = 0;
    FILE * fp;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        puts("Cannot open file.");
        exit(-1);
    }

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        //printf("%c", ch);
        count++;
    }
    //printf("\n");
    fclose(fp);

    return count;
}