#include<stdio.h>
int main()
{
	int sum=0,i,n,c,v,a[50];
	float avg;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Enter the method number, with arrays(1), without arrays(2):\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("Enter the values\n");
			for(i=0;i<n;i++)
				scanf("%d",&a[i]);
			for(i=0;i<n;i++)
				sum+=a[i];
			break;
		case 2:
			printf("Enter the values\n");
			for(i=0;i<n;i++)
			{
				scanf("%d",&v);
				sum+=v;
			}
			break;
		default: printf("Wrong Input\n");
	}
	avg=(float)sum/n;
	printf("Average = %f",avg);
	return 0;
}
