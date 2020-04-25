#include<stdio.h>
void add(int *a,int *b,int *s)
{
	*s=*a+*b;
}
void sub(int *a,int *b,int *diff)
{
	*diff=*a-*b;
}
void mul(int *a,int *b,int *m)
{
	*m=(*a)*(*b);
}
void div(int *a,int *b,int *di)
{
	*di=(*a)/(*b);
}
void rem(int *a,int *b,int *r)
{
	*r=(*a)%(*b);
}
int main()
{
	int num1,num2,sum,diff,di,r,m;
	printf("Enter 2 integers:\n");
	scanf("%d%d",&num1,&num2);
	add(&num1,&num2,&sum);
	printf("The sum of the 2 numbers is = %d\n",sum);
	sub(&num1,&num2,&diff);
	printf("The difference of the 2 numbers is = %d\n",diff);
	mul(&num1,&num2,&m);
	printf("The product of the 2 numbers is = %d\n",m);
	div(&num1,&num2,&di);
	printf("Division of the 2 numbers is = %d\n",di);
	rem(&num1,&num2,&r);
	printf("Remainder of the 2 numbers is = %d\n",r);
	return 0;
}
