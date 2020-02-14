#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float r1,r2,d;
	printf("Enter the values of a, b and c \n");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("The roots are real and distinct. \nThe roots are %f and %f. \n",r1,r2);
	}
	else if(d==0)
	{
		r1=-b/(2*a);
		r2=r1;
		printf("The roots are real and equal. \nThe roots are %f and %f. \n",r1,r2);
	}
	else
		printf("Roots are imaginary\n");
	return 0;
}