#include<stdio.h>

int main() {
	int n, sum, num;

	while (scanf("%d", &n) != EOF) {
		sum = 1;
		while (n--) {
			scanf("%d", &num);
			if (1 == num % 2 ) {
				sum = sum * num;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}