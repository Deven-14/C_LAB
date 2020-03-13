#include<stdio.h>
int main()
{
    int sum=0,n,i,a[50];
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        a[i]=i;
    for(i=1;i<=n;i++)
        sum+=a[i];
    printf("The sum of first %d numbers is: %d\n",n,sum);
    return 0;
}
