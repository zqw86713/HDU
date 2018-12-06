#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main (){
	int m, n;

	int oneth, tenth, hundred;

	while (scanf("%d %d", &m, &n) != EOF) {
		int i;
		int flag = 0;	/*	flag equal 1 means there is at least one solution.
							 flag equal 0 means there is no solution.
							 */

		for ( i = m; i<= n ; i++) {
			oneth= i % 10;
			tenth = i % 100/10;
			hundred = i/100  ;

			//	if (i == pow(hundred, 3) + pow(tenth, 3) + pow(oneth, 3) ) {
			if (i == hundred * hundred * hundred + tenth * tenth * tenth + oneth * oneth * oneth ) {
				if (flag == 0) {
					flag = 1;	/*	flag equal 1 means there is at least one solution.	*/
				} 
				printf("%d ", i);
				
			}
		}

			if ( i == n+1 && flag == 0) {
				printf("no");
			}

			
				printf("\n");
	}

	return 0;
}