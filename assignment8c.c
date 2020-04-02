#include<stdio.h>
#include<math.h>
int main()
{
    int dn,rem,m,bn=0,i=0;
    printf("Enter a decimal number:\n");
    scanf("%d",&dn);
    m=dn;
    while(dn!=0)
    {
        rem=dn%2;
        bn+=(rem*pow(10,i));
        dn=dn/2;
        i++;
    }
    printf("The binary form of %d is %d",m,bn);
    return 0;
}