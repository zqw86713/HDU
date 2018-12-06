#include <stdio.h>
#include <math.h>

int main() {
	float n,m, sum;
	int i;

	while (scanf("%f %f", &n, &m) != EOF) {
		sum = 0;

		for (i=0; i<m;i++) {
			sum = sum + n;
			n = sqrt(n);
		}

		printf("%.2lf\n", sum);
	}

	return 0;
}