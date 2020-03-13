#include<stdio.h>
int main()
{
    int sum=0,i,n;
    float avg;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum+=i;
    avg=(float)sum/n;
    printf("The avg of first %d numbers is: %f\n",n,avg);
    return 0;
}
