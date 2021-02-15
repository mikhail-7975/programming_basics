#include <stdio.h>
#include <math.h>
//type Name (arguments) {
	//function code
//}

int is_prime(int _num) {
	for (int k = 2; k < sqrt(_num); k++) {
		if (_num % k == 0) {
			//_num is prime
			return 0;
		}
	}
	return 1;
}

int main() {
	printf("Enter number: ");
	int number;
	scanf_s("%d", &number, sizeof(int));
	for (int i = 2; i <= number; i++) {
		int is_prime_flag = is_prime(i);
		if (is_prime_flag == 1) {
			printf("%d, ", i);
		}
	}
}