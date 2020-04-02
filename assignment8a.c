#include<stdio.h>
int main()
{
    char ch;
    int u=0,l=0,n=0;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    do
    {
        if(ch>='A' && ch<='Z')
            u++;
        else if(ch>='a' && ch<='z')
            l++;
        else if(ch>='0' && ch<='9')
            n++;
        else
            printf("Wrong input.\n");
        printf("Enter another character or enter * to exit:\n");
        scanf("%c",&ch);
    }while(ch!=*);
    printf("Total uppercase = %d, lowercase = %d, number = %d\n",u,l,n);
    return 0;
}
