#include <stdio.h>
#include <stdlib.h>

void chline(char ch, int i, int j);

int main(void) {

	chline('l', 5, 3);
	
	return 0;
}

void chline(char ch, int i, int j) {
	int line, column;

	for(line = 0; line < j; line++) {
		for(column = 0; column < i; column++) {
			printf("%c", ch);
		}
		printf("\n");
	}
}
