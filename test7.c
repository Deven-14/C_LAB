#include <stdio.h>
int main()
{
    int i,j,m,n,a[50][50],transpose[50][50];
    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of a matrix:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            transpose[j][i]=a[i][j];
    printf("The transpose of the matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("\t%d",transpose[i][j]);
        printf("\n");
    }
    return 0;
}