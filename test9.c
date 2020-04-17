#include <stdio.h>
struct name
{
	char firstname[25];
	char lastname[25];
};
struct student
{
	int rno;
	struct name n;
	char dept[50];
	float fees;
	char section[2];
	int tmarks;
};
int main()
{
	struct student s[2];
	int i;
	for(i=0;i<2;i++)
	{
		printf("Enter the details of the student %d:\n",i+1);
		printf("Enter the roll number:\n");
		scanf("%d",&s[i].rno);
		printf("Enter the firstname:\n");
		scanf("%s",s[i].n.firstname);
		printf("Enter the lastname:\n");
		scanf("%s",s[i].n.lastname);
		printf("Enter the department:\n");
		scanf("%s",s[i].dept);
		printf("Enter the fees:\n");
		scanf("%f",&s[i].fees);
		printf("Enter the section:\n");
		scanf("%s",s[i].section);
		printf("Enter the total marks obtained out of 500:\n");
		scanf("%d",&s[i].tmarks);
	}
	if(s[0].tmarks>=s[1].tmarks)
		i=0;
	else
		i=1;
	printf("The details of the student who scored highest marks are:\n");
	printf("Roll number =%d\n",s[i].rno);
	printf("Firstname=%s\n",s[i].n.firstname);
	printf("Lastname=%s\n",s[i].n.lastname);
	printf("Department=%s\n",s[i].dept);
	printf("Fees=%f\n",s[i].fees);
	printf("Section=%s\n",s[i].section);
	printf("Total marks=%d\n",s[i].tmarks);
	return 0;
}