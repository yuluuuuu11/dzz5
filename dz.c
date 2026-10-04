#include <stdio.h>
#include <math.h>

int main() {
	double x, y, z, w;

	x = 4000;
	y = -0.875;
	z = -0.475e-3;

	w = pow(fabs(cos(x) - cos(y)), 1 + 2 * pow(sin(y), 2)) * (1 + z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4);

	printf("w = %.4f\n", w);

	return 0;
}