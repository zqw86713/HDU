#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	double x1, x2, y1, y2;
	
	double d;
	while (scanf("%1f %1f %1f %1f", &x1, &x2, &y1, &y2) != EOF) {
		d = (x2-x1) * (x2-x1) + (y2-y1) * (y2-y1) ;
		d = pow(d, 0.5);

		printf("%.2lf\n", d);
		
	}

	return 0;
}
