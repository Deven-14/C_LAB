#include <stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int num1,num2;
	printf("Enter 2 integers:\n");
	scanf("%d%d",&num1,&num2);
	printf("Before swapping:\n");
	printf("The value of number 1=%d\n",num1);
	printf("The value of number 2=%d\n",num2);
	swap(&num1,&num2);
	printf("After swapping:\n");
	printf("The value of number 1=%d\n",num1);
	printf("The value of number 2=%d\n",num2);
	return 0;
}