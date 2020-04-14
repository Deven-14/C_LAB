#include <stdio.h>
void concatenate(char p[],char q[])
{
	int c=0,d=0;
	while(p[c]!='\0')
		c++;
	while(q[d]!='\0')
	{
		p[c]=q[d];
		c++;
		d++;
	}
	p[c]='\0';
}
int main()
{
	char a[100],b[100];
	printf("Input a string:");
	gets(a);
	printf("Input a string to concatenate:");
	gets(b);
	concatenate(a,b);
	printf("String obtained on concatenation: %s \n",a);
	return 0;
}