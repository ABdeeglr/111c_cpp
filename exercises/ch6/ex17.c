#include <stdio.h>

int main(int argc, char const *argv[])
{
    double deposit = 1000000;
    double percent = 0.08;
    int count = 1;
    do {
        deposit += deposit * percent;
        deposit -= 100000;
        count++;
    } while(deposit - 100000 > 0);

    printf("After %d years, now deposit is $%lf.\n",
           count, deposit);

    return 0;
}