#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI (3.1415927)

int main() {
        double r= 0.0;
            double v = 0.0;
                while (scanf("%f\n", &r) != EOF) {
                            v = 4/ 3 * PI * pow(r, 3);
                                    printf("%3f\n", v);
                                        }

                    return 0;

}
