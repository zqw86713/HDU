#include <stdio.h>

int main() {
	int min, max;
	int a, b;
	
	int i;

	while (scanf("%d %d", &a, &b) != EOF) {
		int x = 0, y= 0;

		max = a>b ? a:b;
		min = a+b - max ;

		for ( i = min; i <= max ; i++) {
			/* even number.	*/
			if (0 == i % 2) {
				x+= i * i;

			/* odd number.	*/
			} else {
				y+= i *i *i;
			}
		}

		printf("%d %d\n", x, y);

	}
}