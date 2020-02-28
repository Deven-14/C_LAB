#include<stdio.h>
int main()
{
    float s,b,t;
    char ch;
    printf("Enter the salary and gender (m/f) of the employee\n");
    scanf("%f %c",&s,&ch);
    if(ch=='m')
    {
        if(s<10000)
            b=s*0.07;
        else 
            b=s*0.05;
    }
    else
    {
        if(s<10000)
            b=s*0.12;
        else
            b=s*0.10;
    }
    t=s+b;
    printf("The salary to be received with bonus is %f\n",t);
    return 0;
}