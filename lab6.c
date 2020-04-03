#include <stdio.h>
int main()
{
	int i,j,m[5][3],max_m;
	for(i=0;i<5;i++)
	{
		printf("Enter the marks obtained by student %d:",i);
		for(j=0;j<3;j++)
		{
			printf("\n Marks[%d][%d]=",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	for(j=0;j<3;j++)
	{
		max_m=m[0][j];
		for(i=1;i<5;i++)
			if(m[i][j]>max_m)
				max_m=m[i][j];
		printf("\n The highest marks obtained in the subject %d=%d",j,max_m);
	}
	return 0;
}