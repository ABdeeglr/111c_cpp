#include <stdio.h>
#include <stdlib.h>

char * s_gets(char * st, int n);
// 保持命令行，再按任意键退出
void holdon();


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

void holdon() {
	char j;
	scanf("%c", &j);
}
