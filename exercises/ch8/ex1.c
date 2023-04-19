#include <stdio.h>
#include <stdlib.h>

int count_file(const char* filename);

int main(int argc, char const *argv[])
{
    int file_size = count_file(argv[1]);

    printf("There are %d words in %s.\n", file_size, argv[1]);

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