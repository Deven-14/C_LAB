#include<stdio.h>
struct employee
{
	int eno;
	char ename[50];
	float salary;
	char DOB[80];
	char companyname[80];
};
int main()
{
	struct employee e;
	printf("Enter the employee number:\n");
	scanf("%d",&e.eno);
	printf("Enter the employee name:\n");
	scanf("%s",e.ename);
	printf("Enter the salary:\n");
	scanf("%f",&e.salary);
	printf("Enter the DOB:\n");
	scanf("%s",e.DOB);
	printf("Enter the company name:\n");
	scanf("%s",e.companyname);
	printf("Employee details are:\n");
	printf("Employee number =%d\n",e.eno);
	printf("Employee name=%s\n",e.ename);
	printf("Employee salary=%f\n",e.salary);
	printf("Employee DOB=%s\n",e.DOB);
	printf("Company name=%s\n",e.companyname);
	return 0;
}