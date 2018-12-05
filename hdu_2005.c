#include<stdio.h>

int main() {

	int year, month, day;
	int i;
	int sum = 0;

	int isLeap[12] = 	{31, 29, 31,30,31,30,31,31,30,31,30,31};
	int notLeap[12] = 	{31, 28, 31,30,31,30,31,31,30,31,30,31};

	while (scanf("%d/%d/%d", &year, &month, &day)!=EOF) {
	
		/*	it is a leap year.	*/
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 )) {

			for (i = 1 ; i< month-1 ; i++) {
				sum = sum + isLeap[i]; 
			}
			sum = sum + day;
			printf("%d\n", sum);
		} else {		/*	it is not a leap year.	*/
			for (i = 1 ; i< month-1 ; i++) {
				sum = sum + notLeap[i]; 
			}
			sum = sum + day;
			printf("%d\n", sum);
		}

	}
	return 0;
}