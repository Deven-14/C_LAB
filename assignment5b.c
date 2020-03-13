#include <stdio.h>
int main()
{
    int i,odd[10]={1,3,5,7,9,11,13,15};
    printf("The array before deleting the element 5 is:\n");
    for(i=0;i<8;i++)
        printf("%d ",odd[i]);
    for(i=2;i<8;i++)   //i=pos;i<n;i++
        odd[i]=odd[i+1];
    printf("\nThe array after deleting the element 5 is:\n");
    for(i=0;i<7;i++)
        printf("%d ",odd[i]);
    return 0;
}
