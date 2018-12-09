#include <stdio.h>
#include <math.h>

int main() {
	int m;	//	the integer
	int i;	// 	the iteration indicator.
	int k;	//	the square root

	printf("Please input an integer: ")
	scanf("%d", &m);

	k = (int)sqrt((double)m);

	for (i = 2; i<= k; i++) {
		if (0 == m % i) {
			break;
		}

	// 	if all iteration complete, then m is prime number.
		//	After the last iteration, i = k + 1.
		if (i > k) {
			printf(" prime number.\n")
		} else {
			printf(" NOT prime number.\n")

		}

	}

	return 0;
}