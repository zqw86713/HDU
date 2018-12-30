#include<stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        printf("%f\n\n", (1+n)/2.0 * n);
    }
    return 0;
}
