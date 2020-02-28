#include<stdio.h>
int main()
{
    float s,b,t;
    char ch;
    printf("Enter the salary and gender (m/f) of the employee\n");
    scanf("%f%c",&s,&ch);
    if(ch=='m')
    {
        if(s<10000)
            b=s*(7/100);
        else 
            b=s*(5/100);
    }
    else
    {
        if(s<10000)
            b=s*(12/100);
        else
            b=s*(10/100);
    }
    t=s+b;
    printf("The salary to be received with bonus is %f",t);
    return 0;
}