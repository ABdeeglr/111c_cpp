#include "support.h"

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


void die(const char * message) {
    if (errno) perror(message);
    else printf("ERROR: %s\n", message);

    exit(-1);
}


void create_movies(Film * movie_head_pointer) {
    Film * head = movie_head_pointer;
    if (head == NULL) die("Read memory failed!");
    Film * current;
    Film * previous;

    current = desc_movie();
    
    

}


Film * desc_movie() {
    Film * current;
    return current;
}



void show_movies(Film * movie_head_pointer){
    if (movie_head_pointer == NULL) {
        puts("No data entered. ");
    } else {
        puts("Here is the movie list: ");
    }

    Film * current = movie_head_pointer;
    while (current != NULL) {
        printf("Movie: %s  Rating: %d\n", current->title, current->rating);
        current = current->pton;
    }


}


void free_movies(Film * movie_head_pointer) {
    if (movie_head_pointer != NULL) {
        Film * current = NULL;
        do {
            current = movie_head_pointer;
            free(current->title);
            
            current = movie_head_pointer;
        } while (current != NULL);
    }
}

