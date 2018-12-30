#include <stdio.h>
#include <math.h>

int main() {
        int m, n;
            float sum;

                int i, j;

                    while (scanf("%d", &m) != EOF) {
                                for (i = 0; i < m; i++) {
                                                scanf("%d", &n);
                                                            sum = 0;

                                                                        for (j = 1; j <= n; j++) {
                                                                                            sum += pow(-1, j+1) * 1 / j;
                                                                                                        }
                                                                                    printf("%.2f\n", sum);
                                                                                            }
                                    }

                        return 0;
}

