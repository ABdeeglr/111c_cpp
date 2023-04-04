// friend.c -- 嵌套结构示例
#include <stdio.h>
#define LEN 20
const char * msgs[5] = {
    "   Thank your for the wonderful evening,",
    "You certainly prove that a",
    "is a special kind of guy. We must get together",
    "over a delicious ",
    " and have a few laughs"
};

struct name {
    char first_name[LEN];
    char last_name[LEN];
};

struct guy {
    struct name who;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void) {
    struct guy Ewen = {
        {"Ewen", "Blackborn"},
        "salmon",
        "personality coach",
        68112.00
    };

    printf("Dear %s \n\n", Ewen.who.first_name);
    printf("%s %s.\n", msgs[0], Ewen.who.first_name);
    printf("%s%s\n", msgs[1], Ewen.job);
    puts(msgs[2]);
    printf("%s%s%s", msgs[3], Ewen.favfood, msgs[4]);
    if (Ewen.income > 150000.0) puts("!!");
    else if (Ewen.income > 75000.0) puts("!");
    else puts(".");
    printf("\n%40s%s\n", " ", "See you soon,");
    printf("%40s%s\n", " ", "Shalala");

    return 0;
}
