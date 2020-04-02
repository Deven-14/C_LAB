#include<stdio.h>
int main()
{
    int flag=0,n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(int i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%d is a composite number\n",n);
    else
        printf("%d is a prime number\n",n);
    return 0;
}