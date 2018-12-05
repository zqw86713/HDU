#include<stdio.h>
int main()
{
	int year, month, day,i;
	int sum ;
	int a[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int b[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	while (scanf("%d/%d/%d", &year, &month, &day) != EOF)
	{
		sum = 0;
		if ((year % 4 == 0 && year % 4 != 0) || year % 400 == 0)
		{
			for (i = 0; i < month-1; i++)
			{
				sum = sum + a[i];
			}
			sum  += day;
			printf("%d\n", sum);
		}
		else
		{
			for (i = 0; i < month-1; i++)
			{
				sum = sum + b[i];
			}
			sum += day;
			printf("%d\n", sum);
		}
	}
	return 0;
}