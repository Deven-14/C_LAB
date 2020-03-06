#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c,flag;
    float r1,r2,d;
    printf("Enter the coefficients of a quadrtic equation\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
        flag=1;
    else if(d==0)
        flag=2;
    switch(flag)
    {
        case 1:
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
            printf("The roots are real and distinct.\n");
            printf("The roots are %f and %f\n",r1,r2);
            break;
        case 2:
            r1=(-b)/(2*a);
            r2=r1;
            printf("The roots are real and equal.\n");
            printf("The roots are %f and %f\n",r1,r2);
            break;
        default:printf("The roots are imaginary\n");
    }
    return 0;
}