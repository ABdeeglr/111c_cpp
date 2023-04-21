#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct film{
    char * title;
    int rating;
    Film * next;
} Film;

/* -------- Statement -------- */
char * s_gets(char * st, int n);






/* ---------- Main ---------- */
int main(int argc, char const *argv[])
{
    Film * head = NULL;
    Film * current, * prev;

    char* input;

    /*收集并存储信息*/

    return 0;
}





/* --------- Function --------- */
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