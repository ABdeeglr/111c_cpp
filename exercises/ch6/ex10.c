#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2;
    int sum;
    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &num1, &num2);
    int i,j; // 为求和的for循环提供上下限
    while (num1 < num2) {
        sum = 0; // 初始化
        for (i = num1; i < num2 + 1; i++) {
            sum += i*i;
        }
        printf("The sums of the squares from %d to %d is %d\n",
                num1*num1, num2*num2, sum);
        printf("Enter next set of limits: ");
        if (scanf("%d %d", &num1, &num2) == 0) break;
    }

    return 0;
}
