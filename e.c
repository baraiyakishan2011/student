#include<stdio.h>

struct employee{
	int emp_id;
	char emp_name[100];
 	int emp_age;
	char emp_role[100];
	char emp_city[100];
	int emp_experience;
	char emp_company_name[100];	
}

main()
{
	int i,n;
	
	printf("number of employee = ");
	scanf("%d",&n);
	
	struct employee e[n];
	
	for(i=0;i<n;i++)
	{
		printf("Employee id = ");
		scanf("%d",&e[i].emp_id);
		printf("Employee name = ");
		scanf("%s",&e[i].emp_name);
		printf("Employee age = ");
		scanf("%d",&e[i].emp_age);
		printf("Employee role = ");
		scanf("%s",&e[i].emp_role);
		printf("Employee city = ");
		scanf("%s",&e[i].emp_city);
		printf("Employee Experience = ");
		scanf("%d",&e[i].emp_experience);
		printf("Employee company name = ");
		scanf("%s",&e[i].emp_company_name);
	}
	printf("\n\n--------------- Employee details ---------------\n");
	for(i=0;i<n;i++)
	{
		printf("Employee id = %d\n",e[i].emp_id);
		printf("Employee name = %s\n",e[i].emp_name);
		printf("Employee age = %d\n",e[i].emp_age);
		printf("Employee role = %s\n",e[i].emp_role);
		printf("Employee city = %s\n",e[i].emp_city);
		printf("Employee Experience = %d\n",e[i].emp_experience);
		printf("Employee company name = %s\n",e[i].emp_company_name);
		printf("\n");
	}
}
