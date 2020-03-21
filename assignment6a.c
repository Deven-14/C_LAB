#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum+=pow(2*i,2);
    printf("The sum of the series 2^2+4^2+...+%d^2=%d",n,sum);
    return 0;
}