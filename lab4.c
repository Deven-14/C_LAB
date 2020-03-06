#include<stdio.h>
int main()
{
	int m,n,sum=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		n=n%10;
		sum+=n;
		n=n/10;
	}
	printf("The sum of the digits of %d is %d\n",m,sum);
	return 0;
}