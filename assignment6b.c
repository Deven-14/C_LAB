#include <stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float sum=0;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum+=(float)(1/pow(i,2));
    printf("The sum of the series 1/1^2 +1/2^2 +....+1/%d^2 =%0.2f",n,sum);
    return 0;
}