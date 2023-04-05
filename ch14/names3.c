#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SLEN 81
struct namect {
    char * fname;
    char * lname;
    int letters;
};

void getinfo(struct namect *); // 分配内存
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *); // 清理内存
char * s_gets(char * st, int n);

int main(void) {
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    cleanup(&person);

    return 0;
}


void getinfo(struct namect * pst) {
    printf("Enter your first name: ");
    char tmp[SLEN];
    s_gets(tmp, SLEN);
    pst->fname = (char *) malloc(strlen(tmp) + 1);
    strcpy(pst->fname, tmp);

    printf("Enter your last name: ");
    char tmp2[SLEN];
    s_gets(tmp2, SLEN);
    pst->lname = (char *) malloc(strlen(tmp2) + 1);
    strcpy(pst->lname, tmp2);
}


void makeinfo(struct namect * pst) {
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}


void showinfo(const struct namect * pst) {
    
    printf("%s %s, your name has %d letters.\n",
            pst->fname, pst->lname, pst->letters);
}

void cleanup(struct namect * pst) {
    free(pst->fname);
    free(pst->lname);
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
