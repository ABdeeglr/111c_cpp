/*
 * book.c -- 一本书的图书目录
 */

#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 41 // 书名的最大长度+1
#define MAXAUTH 31 // 作者的最大长度+1

struct book {
    char title[MAXTITL];
    char author[MAXAUTH];
    float value;
};

int main(void) {
    struct book library;

    printf("Please enter the book title: ");
    s_gets(library.title, MAXTITL);
    printf("Now enter the author: ");
    s_gets(library.author, MAXAUTH);
    printf("Now enter the value: ");
    scanf("%f", &library.value);
    printf("\n%s by %s: $%.2f\n", library.title,
            library.author, library.value);
    printf("%s: \"%s\" ($%.2f)\n", library.author,
            library.title, library.value);
    puts("Done.");

    return 0;
}


char * s_gets(char * st, int n) {
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin); // 将传入的 st 指针与输入的字符串绑定
    if (ret_val) {
        find = strchr(st, '\n');
        if (find) *find = '\0';
        else {
            while (getchar() != '\n') {
                continue; // 处理 stdin 中多余的字符, 这一步可以直接刷新缓冲区的吧。
            }
        }
    }
    return ret_val; // 判断是否获取有效字符串
}
