#include <stdio.h>
#include <stdlib.h>
#include "support.h"
#define TSIZE 45 /* 储存片名的数组大小 */
#define FMAX 5  /* 影片的最大数量 */

struct film {
    char title[TSIZE];
    int rating;
};

int main(int argc, char const *argv[])
{
    struct film movies[FMAX];
    int i = 0;
    int j;

    puts("Enter first movies title: ");
    while (i < FMAX &&
           s_gets(movies[i].title, TSIZE) != NULL &&
           movies[i].title[0] != '\0') {
        
        puts("Enter your rating <0-10>: ");
        scanf("%d", &movies[i++].rating);
        while (getchar() != '\n') continue;
        puts("Enter next movie title (empty line to stop): ");
    }

    if (i == 0) puts("There is no data.");
    else puts("Here is the movie list:");

    for (j = 0; j < i; j++) {
        printf("Movoie: %s\tRatin: %d\n", movies[j].title, movies[j].rating);
    }

    printf("Bye!\n");

    holdon();

    return 0;
}
