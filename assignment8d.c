#include<stdio.h>
int main()
{
    int rev_n=0,rem,o_n,n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    o_n=n;
    while(n!=0)
    {
        rem=n%10;
        rev_n=rev_n*10+rem;
        n=n/10;
    }
    if(o_n==rev_n)
        printf("%d is a palindrome\n",o_n);
    else
        printf("%d is not a palindrome\n",o_n);
    return 0;
}