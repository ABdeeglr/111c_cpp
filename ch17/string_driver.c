#include "String.h"

/* ------------ Main ------------ */
int main(int argc, char const *argv[])
{
    printf("Enter the words here >> ");
    String * here = getString();

    putString(here);
    freeString(here);
    
    return 0;
}