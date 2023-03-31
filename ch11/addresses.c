#include <stdio.h>
#define MSG "I'm special"

int main(int argc, char const *argv[])
{
	char ar[] = MSG;
	const char * pt = MSG;


	printf("address of \"I'm special\": %p \n", "I'm special");
	printf("              address ar: %p \n", ar);
	printf("              address pt: %p \n", pt);
	printf("          address of MSG: %p \n", MSG);
	printf("address of \"I'm special\": %p \n\n", "I'm special");

	/*
	 *address of "I'm special": 0x556bb6fd4008 
     *              address ar: 0x7ffcfb604d5c 
     *              address pt: 0x556bb6fd4008 
     *          address of MSG: 0x556bb6fd4008 
     *address of "I'm special": 0x556bb6fd4008
	 */
	
	return 0;
}