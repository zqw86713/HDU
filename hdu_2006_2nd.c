
#include <stdio.h>
int main()
{
	int n,sum,num;
	while(scanf("%d",&n)!=EOF)
	{
		sum=1;
		while(n--)
		{
			scanf("%d",&num);
			if(num%2==1)
				sum*=num;
		}
		printf("%d\n",sum);
	}
	return 0;
}