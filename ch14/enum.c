#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char * s_gets(char * st, int n);

enum spectrum {red, orange, yellow, green, blue, violet};
const char * colors [] = {
    "red", "orange", "yellow",
    "green", "blue", "violet"
};
#define LEN 30

int main(void) {
    char choice[LEN];
    enum spectrum color;
    bool color_is_found = false;

    puts("Enter a color (empty line to quit)");
    while (s_gets(choice, LEN) != NULL && choice[0] != '\0') {
        for (color = red; color <= violet; color++) {
            if (strcmp(choice, colors[color]) == 0) {
                color_is_found = true;
                break;
            }
        }

        if (color_is_found) {
            switch (color) {
            case red:
                puts("Rose are red!");
                break;
            case orange:
                puts("Poppies are orange.");
                break;
            case yellow:
                puts("Sunflowers are yellow.");
                break;
            case green:
                puts("Grass is green.");
                break;
            case blue:
                puts("Bluebells are blue.");
                break;
            case violet:
                puts("Violets are violet.");
                break;
            default:
                printf("I don't know about the color %s.\n", choice);
            }
        } else {
            printf("I don't know about the color %s.\n", choice);
        }
        color_is_found = false;
        puts("Next color, please (empty line to quit).");   
    }

    puts("Good bye!");

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
