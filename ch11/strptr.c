#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("%%s->%s, %%p->%p, %%c->%c\n", *"We", "Are", *"Space farers");

	return 0;
}