#include <stdio.h>

int main(int argc, char const *argv[])
{
    double Daphne = 100;
    double Deirdre = 100;
    int count = 1;
    do {
        Daphne += 10;
        Deirdre += Deirdre*0.05;
        count++;
    } while(Deirdre < Daphne);

    printf("After %d years, Deirdre's investment of $%lf overed Daphne's of $%lf",
           count, Daphne, Deirdre);

    return 0;
}
