#include <stdio.h>
int input()
{
	int a;
	scanf("%d",&a);
	return a;
}
int process(int h,int m)
{
	int d=h*60+m;
	return d;
}
void output(int h,int m,int d)
{
	printf("%d Hours and %d mintues = %d mintues\n",h,m,d);
}
int main()
{
	int h,m,d;
	printf("Enter the number of hours\n");
	h=input();
	printf("Enter the number of mintues\n");
	m=input();
	d=process(h,m);
	output(h,m,d);
	return 0;
}