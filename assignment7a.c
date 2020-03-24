#include <stdio.h>
int main()
{
    int n=6,a[6]={2,3,5,7,11,13},s=11,first,last,pos,middle;
    first=0;
    last=n-1;
    pos=-1;
    while(first<=last)
    {
        middle=(first+last)/2;
        if(s>a[middle])
            first=middle+1;
        else if(s==a[middle])
        {
            pos=middle;
            break;
        }
        else
            last=middle-1;
    }
    if(pos==-1)
        printf("11 is not present in the array\n");
    else
        printf(" 11 is present in the position %d\n",pos);
    return 0;
}
