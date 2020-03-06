#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	printf("The multiples of %d are ",n);
	for(i=1;i<=100;i++)
	{
		if(i%n==0)
			printf("%d, ",i);
	}
	return 0;
}