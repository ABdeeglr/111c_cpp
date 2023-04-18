#include <stdio.h>

int main(int argc, char const *argv[])
{
    int odd = 0, even = 0;
    int sum_odd = 0, sum_even = 0;
    int num_input;
    char ffl; // 一个用于刷新缓冲区的变量
    printf("Please enter an integer, enter 0 to finish >> ");
    do {
        while (scanf("%d", &num_input) == 0) {
            printf("Bad usage, please enter an integer!\n>> ");
            while ((ffl = getchar()) != '\n' && ffl != EOF);
        }

        if (num_input == 0) break;

        switch (num_input % 2) {
        case 0:
            even++;
            sum_even += num_input;
            break;
        
        default:
            odd++;
            sum_odd += num_input;
            break;
        }
        printf("Next number >> ");

    } while (1);

    printf("There are %d even numbers, their average is %f.\n",
            even, (float)sum_even / (float)even);

    printf("There are %d odd numbers, their average is %f.\n",
            odd, (float)sum_odd / (float)odd);

    return 0;
}
