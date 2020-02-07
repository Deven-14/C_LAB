#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,d;
	printf("Enter the coordinates of 2 points (x1,y1) and(x2,y2)\n");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("The distance between the points (%f,%f) and (%f,%f) is %f\n",x1,y1,x2,y2,d);
	return 0;
}