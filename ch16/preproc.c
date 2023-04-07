#include <stdio.h>
#define TWO 2
#define OW "Conststency is the last refuge of the unimagina\
    tive. -Oscar Wilde"

#define FOUR TWO*TWO
#define PX printf("X is %d.\n", x)
#define FMT "X is %d.\n"

int main(void) {
    int x = TWO;
    
    PX;
    x = FOUR;
    printf(FMT, x);
    printf("%s\n", OW);
    printf("TWO: OW\n"); // 不替换字面量字符串中的内容

    return 0;
}
