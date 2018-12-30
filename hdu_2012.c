#include <stdio.h>
#include <math.h>
//  #include <stdbool.h>



int main() {
        int x, y;
            int result;
                int i;
                int j;
                    int floor;  /*  the integer part of the floor of squar root.    */
                        

                        while (scanf("%d %d", &x, &y)!= EOF) {

                                    if (x == 0 && y == 0) {
                                                    break;
                                                            }
                                            
                                            for (i = x; i<= y; i++) {
                                                            result = i * i + i + 41;

                                                                        floor = (int)sqrt((double)result);

                                                                                    for (j = 2 ; j <= floor; j++) {
                                                                                                        if (result % j == 0) {
                                                                                                                                printf("Sorry\n");
                                                                                                                                                    break;
                                                                                                                                                                    } 
                                                                                                                    }

                                                                                                if (j == floor + 1) {
                                                                                                                    printf("OK\n");
                                                                                                                                }

                                                                                                        
                                                                                                        }
                                                }


                            return 0;
}

