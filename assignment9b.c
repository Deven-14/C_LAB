#include<stdio.h>
int main()
{
    int i,j,m,n,f[50][50],s[50][50],sum[50][50],diff[50][50];
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter elements of 1st matrix:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&f[i][j]);
    printf("Enter elements of 2nd matrix:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&s[i][j]);
    printf("The sum of the 2 matrices is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=f[i][j]+s[i][j];
            printf("\t%d",sum[i][j]);
        }
        printf("\n");
    }
    printf("The difference of the 2 matrices is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            diff[i][j]=f[i][j]-s[i][j];
            printf("\t%d",diff[i][j]);
        }
        printf("\n");
    }
    return 0;
}