#include<stdio.h>
int main()
{
    int i,j,m,n,a[50][50];
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter elements of a matrix:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("The elements of the matrix are:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("\t%d",a[i][j]);
        printf("\n");
    }
    return 0;
}