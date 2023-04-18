#include <stdio.h>

int main(int argc, char const *argv[])
{
    int friends = 5;
    int count = 1;
    do {
        friends -= count;
        friends *= 2;
        count++;
    } while (friends < 150);
    
    printf("After %d weeks, the number of Dr.Rabnud's friends has overed 150.\n", count);
    printf("He now has %d friends totally.\n", friends);
    return 0;
}
