#include <stdio.h>
#include <math.h>

int main() {
        double num;
	while (scanf("%lf\n", &num) != EOF) {
		   printf("%.2lf\n", fabs(num));
	}
}