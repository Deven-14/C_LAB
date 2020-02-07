#include<stdio.h>
int main()
{
	float p,t,r,si;
	printf("Enter the Principal, Time and Rate of interest\n");
	scanf("%f%f%f",&p,&t,&r);
	si=(p*t*r)/100;
	printf("The Simple Interest is %f\n",si);
	return 0;
}