#include<stdio.h>
int main()
{
    int i,even[10]={2,4,6,8,12,14,16};
    printf("The array before storing the missing element 10 is:\n");
    for(i=0;i<7;i++)
        printf("%d ",even[i]);
    for(i=4;i<7;i++)
        a[i+1]=a[i];
    a[4]=10;
    printf("The array after storing the missing element 10 is:\n");
    for(i=0;i<8;i++)
        printf("%d ",even[i]);
    return 0;
}
