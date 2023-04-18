#include <stdio.h>

int get_integer_power(int, int);

int main(int argc, char const *argv[])
{
    int nums[8];
    int i;
    for (i = 0; i < 8; i++) {
        nums[i] = (int)get_integer_power(2, i+1);
    }
    i = 0;
    do {
        printf("%d ", nums[i]);
        i++;
    } while(i < 8);
    printf("\n");

    return 0;
}

int get_integer_power(int num, int power) {
    int res = 1;
    for (power; power > 0; power--) {
        res *= num;
    }

    return res;
}