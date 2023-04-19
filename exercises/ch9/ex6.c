void rank3(double * i, double * j, double * k);

void rank3(double * i, double * j, double * k){
	double * temp;

	if (*i > *j) {
		temp = j;
		j = i;
		i = temp;
	}
}
