#include <stdio.h>
int main()
{
 int a,i,fact=1;
 printf("Enter an interger:\n");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 fact=fact*i;
 printf("The factorial of %d! is %d\n",a,fact);
 return 0;
}
