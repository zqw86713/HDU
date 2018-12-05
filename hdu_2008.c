#include <stdio.h>

int main() {

	int n;
	while (scanf("%d", &n)!=EOF) {
		if (n == 0) {
			break;
		}

		int i;
		double arr[200] ;
		int plusCounter = 0, zeroCounter = 0, negCounter = 0;

		for (i=0; i<n; i++) {
			scanf("%f", &arr[i]);
			if (arr[i] > 0) {
				plusCounter+=1;
			} else if (0 == arr[i]) {
				zeroCounter+=1;
			} else {
				negCounter+=1;
			}
		}

		printf("%d %d %d\n", negCounter, zeroCounter, plusCounter);
	}

	return 0;
}