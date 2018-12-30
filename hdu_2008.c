#include <stdio.h>

int main() {
        int n;
            double num;
                int neg;
                    int zero;
                        int pos;

                            while (scanf("%d", &n) != EOF) {

                                        if (n == 0) {
                                                        break;
                                                                }


                                                num = 0;
                                                        neg = 0;
                                                                pos = 0;
                                                                        zero = 0;
                                                                            
                                                                                    
                                                                                while (n--){
                                                                                                scanf("%lf", &num);

                                                                                                            if (num == 0) {
                                                                                                                                zero++;
                                                                                                                                            } else if (num > 0) {
                                                                                                                                                                pos++;
                                                                                                                                                                            } else {
                                                                                                                                                                                                neg++;
                                                                                                                                                                                                            }
                                                                                                                    }

                                                                                        printf("%d %d %d\n", neg, zero, pos);

                                                                                            }
                                return 0;
}
