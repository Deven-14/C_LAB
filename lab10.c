#include <stdio.h>
int main()
{
	FILE *fp;
	char c;
	printf("Data Input\n");
	fp=fopen("INPUT.txt","w");
	while((c=getchar())!=EOF)
		fputc(c,fp);
	fclose(fp);
	printf("\nData Output\n");
	fp=fopen("INPUT.txt","r");
	while((c=fgetc(fp))!=EOF)
		printf("%c",c);
	fclose(fp);
	return 0;
}