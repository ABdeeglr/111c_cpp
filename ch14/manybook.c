/*
 * manybook.c -- 包含多本书的图书目录
 */

#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
#define MAXTITL 41 // 书名的最大长度+1
#define MAXAUTH 31 // 作者的最大长度+1
#define MAXBKS 100 // 书籍的最大数量

struct book {
    char title[MAXTITL];
    char author[MAXAUTH];
    float value;
};

int main(void) {
    struct book library[MAXBKS];
    int count = 0;
    int index;
    
    puts("Please enter the book title.");
    puts("Press [Enter] at the start of a line to stop.");
    while (count < MAXBKS &&
            s_gets(library[count].title, MAXTITL) != NULL &&
            library[count].title[0] != '\0') {
        printf("Now enter the author: ");
        s_gets(library[count].author, MAXAUTH);
        printf("Now enter the value: $");
        scanf("%f", &library[count].value); 
        // 书中使用了 library[count++] 的代码，但这可读性不太好
        count++;
        while (getchar() != '\n') {
            continue;
        }
        if (count < MAXBKS) printf("Enter the next title.\n");
    }

    if (count > 0) {
        puts("Here is the list of your books:\n");
        for (index = 0; index < count; index++) {
            printf("The book \"%s\" costs $%.2f, and it's author is %s.\n",
                    library[index].title,
                    library[index].value,
                    library[index].author);
        }
    } else puts("There is no book...");

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
