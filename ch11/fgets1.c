#include <stdio.h>
#define STLEN 14

int main(int argc, char const *argv[])
{
	char words[STLEN];

	puts("Enter a string.");
	fgets(words, STLEN, stdin);
	puts(words);
	fputs(words, stdout);

	puts("Enter another string.");
	fgets(words, STLEN, stdin);
	puts(words);
	fputs(words, stdout);

	puts("Done");

	return 0;
}