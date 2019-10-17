#include <stdio.h>
#include <stdlib.h>
int main ( int argc, char * argv [])
{
	double x, y, z, w;
	x = atof(argv[1]);
	y = atof(argv[2]);
	z = x + y;
	printf("%.2lf\n", z);
	z = x - y;
	printf("%.2lf\n", z);
	w = x * y;
	printf("%.2lf\n", w);
	w = x / y;
	printf("%.2lf\n", w);
	return 0;
}
