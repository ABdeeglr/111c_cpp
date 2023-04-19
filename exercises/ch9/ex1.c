#include <stdio.h>

double min(double x, double y);

int main(void) {

	return 0;
}

double min(double x, double y){
	if (x - y > 0) return x;
	return y;
}


