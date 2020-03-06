#include<stdio.h>
int main()
{
	int m,a,b,sum=0;
	printf("Enter a number\n");
	scanf("%d",&a);
	m=a;
	while(a>0)
	{
		b=a%10;
		sum+=b;
		a=a/10;
	}
	printf("The sum of the digits of %d is %d\n",m,sum);
	return 0;
}
