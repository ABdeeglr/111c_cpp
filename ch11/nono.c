#include <stdio.h>

int main(int argc, char const *argv[])
{
	char side_a[] = "Side A";
	char dont[] = {'x', 'Y', 'Z', '!'};
	char sied_b[] = "Side B";

	puts(dont);
	printf("dont->%p, side_a->%p\n",dont, side_a);

	return 0;
}