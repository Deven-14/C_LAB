#include<stdio.h>
#define pi 3.14
float input()
{
	float r;
	printf("Enter the radius of a circle\n");
	scanf("%f",&r);
	return r;
}
float process(float r)
{
	float area=pi*r*r;
	return area;
}
void output(float area)
{
	printf("The area of the circle is %f\n",area);
}
int main()
{ 
	float r, area;
	r=input();
	area=process(r);
	output(area);
	return 0;
}