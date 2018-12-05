#include<stdio.h>

int main(){
	char a, b, c, d, min, median, max;

	while (scanf("%c%c%c%c", &a, &b, &c, &d) != EOF) {
		min = a < b? a : b;
		min = min < c ? min : c;

		max = a >b ?a : b;
		max = max > c? max : c;

		median = a + b + c - min - max;
		printf("%c %c %c\n", min, median, max);
	}

	return 0;
}
