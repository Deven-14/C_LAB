#include <stdio.h>
int main()
{
	char s[100];
	int i,len,flag=0,c=0;
	printf("Input a string:");
	gets(s);
	while(s[c]!='\0')
		c++;
	len=c;
	for(i=0;i<len;i++)
		if(s[i]!=s[len-1-i])
		{
			flag=1;
			break;
		}
	if(flag==0)
		printf("%s is a palindrome string",s);
	else
		printf("%s is not a palindrome string",s);
	return 0;
}