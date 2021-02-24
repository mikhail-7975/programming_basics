#include <stdio.h>
#include <math.h>

double calculate_pi(int n) {
	double result_new = 0.;
	double result_old = 0.;
	
	int i = 0;
	double eps = pow(10, -(n + 1));
	while (1) {
		//printf("before: i = %d,\t res_new = %lf;\t res_old = %lf\n",i, result_new, result_old);
		
		result_old = result_new; 
		result_new += pow(-1, i) * 4 / (2 * i + 1);		
		//printf("after: i = %d,\t res_new = %lf;\t res_old = %lf\n", i, result_new, result_old);
		
		if (fabs(result_new - result_old) < eps) {
			break;
		}
		
		i++;
	}
	return result_new;
}

int main() {
	int n = 6;
	double PI = calculate_pi(n);
	printf("pi = %.*lf",n + 1, PI);
}

