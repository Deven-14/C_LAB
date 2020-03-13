#include<stdio.h>
int main()
{
    int sum=0,n,i,a[50];
    float avg;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        a[i]=i+1;
    for(i=0;i<n;i++)
        sum+=a[i];
    avg=(float)sum/n;
    printf("The avg of first %d numbers is: %f\n",n,avg);
    return 0;
}
