double converge_average(double, double);

double converge_average(double a, double b) {
	double res = 0;

	a = 1 / a;
	b = 1 / b;

	res = a + b;

	return 1 / res;
}
