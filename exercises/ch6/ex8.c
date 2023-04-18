/**
 * 处理输入真的很麻烦诶！
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float i,j;
    char ch;
    int status;
    printf("Please enter 2 float numbers: ");
    do {
        status = scanf("%f", &i);
        if (status == 0) {
            puts("Opps! That's not a float number.");
            printf(">> ");
            while ((ch = getchar()) != '\n' && ch != EOF);
        }
    } while(status == 0);

    printf("And another here: ");
    do {
        status = scanf("%f", &j);
        if (status == 0) {
            puts("Opps! That's not a float number.");
            printf(">> ");
            while ((ch = getchar()) != '\n' && ch != EOF);
        }
    } while(status == 0);

    printf("%f || %f\n", i, j);
    
    return 0;
}
