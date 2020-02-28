#include<stdio.h>
#include<math.h>
float input()
{
    float a;
    printf("Enter one side of a triangle\n");
    scanf("%f",&a);
    return a;
}
float process(float a,float b,float c)
{
    float area,s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
void output(float area)
{
    printf("The area of the circle is %f\n",area);
}
int main()
{ 
    float a,b,c, area;
    a=input();
    b=input();
    c=input();
    area=process(a,b,c);
    output(area);
    return 0;
}