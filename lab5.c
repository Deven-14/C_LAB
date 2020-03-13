#include <stdio.h>
int main()
{
	int n,i,s,s_pos,l,l_pos,a[50];
	printf("Enter the number of elements of the array:\n");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	s=a[0];
	s_pos=0;
	l=a[0];
	l_pos=0;
	for(i=0;i<n;i++)
	{
		if(a[i]<s)
		{
			s=a[i];
			s_pos=i;
		}
		if(a[i]>l)
		{
			l=a[i];
			l_pos=i;
		}
	}
	a[s_pos]=l;
	a[l_pos]=s;
	printf("Array after interchanging the largest and smallest element is:\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}