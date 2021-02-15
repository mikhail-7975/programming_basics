#include <stdio.h>
#include <math.h>

int main() {
	//ax^2 + bx + c == 0
	double a, b, c;
	printf("Enter a, b, c\n");
	scanf_s("%lf", &a, sizeof(double));
	scanf_s("%lf", &b, sizeof(double));
	scanf_s("%lf", &c, sizeof(double));
	printf("a = %lf, b = %lf, c = %lf\n", a, b, c);

	if (a == 0.) {
		printf("a == 0. Linear eq\n");
		if (b == 0.) {
			if (c == 0) {
				printf("too many roots\n");
			} else {
				printf("no roots\n");
			}
		} else {
			printf("x = %lf", -c / b);
		}
	} else {
		printf("a != 0. NonLinear eq\n");
		double D = b * b - 4 * a * c;
		printf("D = %lf\n", D);
		if (D < 0.) {
			printf("no roots\n");
		} else {
			printf("x1 = %lf\n", (-b + sqrt(D)) / (2 * a));
			printf("x2 = %lf\n", (-b - sqrt(D)) / (2 * a));
		}
	}
}

