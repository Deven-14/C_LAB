#include<stdio.h>
int main()
{
	float a,b,c,sum,avg;
	printf("Enter the 3 numbers\n");
	scanf("%f%f%f",&a,&b,&c);
	sum=a+b+c;
	avg=sum/3;
	printf("The Sum and Average are : %f %f \n",sum,avg);
	return 0;
}
