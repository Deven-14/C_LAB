#include <stdio.h>
int main()
{
    int a[10]={23,27,5,7,33,17,7,19,21,57},s=21,i;
    for(i=0;i<10;i++)
    { 
        if(a[i]==s)
        {
            printf(" 21 is present in the position %d\n",i);
            break;
        }
    }
    if(i==10)
        printf("21 is not present in the array\n");
    return 0;
}
