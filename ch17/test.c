#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>

#define TSIZE 45 /*影片名的最大长度*/
#define FMAX 5 /*影片的最大数量*/

typedef struct film {
    char title[TSIZE];
    int rating;
} Film;

void die(const char * message);
char * s_gets(char * st, int n);
void num_gets(int *);
Film * make_information_of_a_movie(void);
void free_movie_information(Film * movie);
void show_movie_information(Film * movie);

/*---------------  Main Function ---------------*/
int main(int argc, char const *argv[])
{
    Film * movies[FMAX];

    int i = 0;

    puts("Enter the first: ");
    while (i < FMAX && getchar()) {
        movies[i] = make_information_of_a_movie();
        puts("Enter the next (empty line to quit).");
        i++;
    }

    for (int j = 0; j < i; j++) {
        show_movie_information(movies[j]);
        free_movie_information(movies[j]);
    }


    return 0;
}



/*---------------  Sub Function  ---------------*/
Film * make_information_of_a_movie(void) {
    Film * movie = (Film *)malloc(sizeof(Film));
    s_gets(movie->title, TSIZE);
    printf("Enter the rating of this movie >> ");
    num_gets(&movie->rating);

    return movie;
}


void free_movie_information(Film * movie) {
    free(movie);
}


void show_movie_information(Film * movie) {
    printf("%s, whose rate is < %d >.\n", movie->title, movie->rating);
}



/*----------  Common Support Function ----------*/
char * s_gets(char * st, int n) {
	char * ret_val;
	int i = 0;

	ret_val = fgets(st, n, stdin);
	if (ret_val) {
		while (st[i] != '\n' && st[i] != '\0') {
			i++;
		}
		if (st[i] == '\n') {
			st[i] = '\0';
		} else {
			while (getchar() != '\n') {
				continue;
			}
		}

	}

	return ret_val;
}


void num_gets(int * num) {
    char ffl;
    while (scanf("%d", num) == 0) {
            printf("Bad usage, please enter an integer!\n>> ");
            while ((ffl = getchar()) != '\n' && ffl != EOF);
        }
    while ((ffl = getchar()) != '\n' && ffl != EOF);
}


void die(const char * message) {
    if (errno) perror(message);
    else printf("ERROR: %s\n", message);

    exit(-1);
}




