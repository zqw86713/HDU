#include <stdio.h>
#include <math.h>

int main() {

	int m; 
	int a[1000];
	int i ; 
	int j;
	double sum ;

	while (scanf("%d", &m) != EOF ) { 
		sum = 0;
		i = 0;
		while (m--) {
			scanf("%d", a[i]);
			
			for (j = 0; j<a[i]; j++) {
				sum = sum + pow((-1), j) / j * 1;
			}

			printf("%.2f\n", sum);

			i++;
		}	

		
		printf("");


	}
	return 0;
}