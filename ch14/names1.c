#include <stdio.h>
#include <string.h>

#define NLEN 30
struct namect {
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
char * s_gets(char * st, int n);

int main(void) {
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);

    return 0;
}

void getinfo(struct namect * pst) {
    printf("Please enter your first name.\n");
    s_gets(pst->fname, NLEN);
    printf("Please enter your last name.\n");
    s_gets(pst->lname, NLEN);
}


void makeinfo(struct namect * pst) {
    pst-> letters = strlen(pst->fname) + strlen(pst->lname);
}


void showinfo(const struct namect * pst) {
    printf("%s %s, your name contains %d letters.\n",
            pst->fname, pst->lname, pst->letters);
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
