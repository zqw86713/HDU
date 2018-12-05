#include <stdio.h>
#include <math.h>

int main() {
        int num;
        int temp;

	while (scanf("%d", &num) != EOF) {

                if(num < 0 || num> 100) {
                        printf("Score is error!\n");
                        
                } else {

                        temp = num/10;
                        switch(temp) {
                                case 100:
                                case 9 : {
                                        printf("A\n");
                                        break;
                                }
                                case 8 : {
                                        printf("B\n");
                                        break;
                                }
                                case 7 : {
                                        printf("C\n");
                                        break;
                                }
                                case 6 : {
                                        printf("D\n");
                                        break;
                                }
                                default: {
                                        printf("E\n");
                                }
                        }
                }

	}
        return 0;
}