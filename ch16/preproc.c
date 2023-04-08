#include <stdio.h>
#define TWO 2
#define OW "Conststency is the last refuge of the unimagina\
tive. -Oscar Wilde"

#define FOUR TWO*TWO
#define PX printf("X is %d.\n", x)
#define FMT "X is %d.\n"

int main(void) {
    int x = TWO;
    const char * it = "X is %d.\n"; // 惊了，转义序列原来可以不用字面量
    PX;
    x = FOUR;
    printf(it, x);
    printf("%s\n", OW);
    printf("TWO: OW\n"); // 不替换字面量字符串中的内容

    return 0;
}
