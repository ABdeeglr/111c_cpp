#include <stdio.h>
#include <string.h>

#define SIZE 81
#define LIM 20
#define HALT ""

void stsrt(char *strings [], int num);
char* s_gets(char * st, int n);

int main(int argc, char const *argv[])
{
	char input[LIM][SIZE];
	char *ptstr[LIM];

	int ct = 0;
	int k;

	printf("Input up to %d lines, and I will sort them.\n", LIM);
	puts("To stop, press the ENTER key at a line's start.");
	while (ct < LIM && 
		   s_gets(input[ct], SIZE) != NULL &&
		   input[ct][0] != '\0') {
		ptstr[ct] = input[ct];
		ct++;
	}

	stsrt(ptstr, ct);
	puts("\nHere's the sorted list:\n");
	for (k = 0; k < ct; k++) {
		puts(ptstr[k]);
	}

	return 0;
}


void stsrt(char *strings [], int num) {
	char *tmp;
	int top, seek;

	for (top = 0; top < num - 1; top++) {
		for (seek = 0; seek < num; seek++) {
			if (strcmp(strings[top], strings[seek]) > 0) {
				tmp = strings[top];
				strings[top] = strings[seek];
				strings[seek] = tmp;
			}
		}
	}
}

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