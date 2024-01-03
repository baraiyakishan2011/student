#include<stdio.h>

struct student 
{
    int stu_id;
 	char stu_name[100];
 	int stu_age;
 	char stu_course[100];
 	char stu_city[100];
 	int stu_std;
	char stu_school[100];
}

main()
{

	int i,n;
	printf("number of student = ");
	scanf("%d",&n);
	
	struct student s[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter student id = ");
		scanf("%d",&s[i].stu_id);
		printf("Enter student name = ");
		scanf("%s",&s[i].stu_name);
		printf("Enter student age = ");
		scanf("%d",&s[i].stu_age);
		printf("Enter student course = ");
		scanf("%s",&s[i].stu_course);
		printf("Enter student city = ");
		scanf("%s",&s[i].stu_city);
		printf("Enter student std = ");
		scanf("%d",&s[i].stu_std);
		printf("Enter student school = ");
		scanf("%s",&s[i].stu_school);
	}
	printf("\n\n----------- Student Details ---------------\n");
	for(i=0;i<n;i++)
	{
		printf("student id = %d\n",s[i].stu_id);
		printf("student name = %s\n",s[i].stu_name);
		printf("student age = %d\n",s[i].stu_age);
		printf("student course = %s\n",s[i].stu_course);
		printf("student city = %s\n",s[i].stu_city);
		printf("student std = %d\n",s[i].stu_std);
		printf("student school = %s\n",s[i].stu_school);		
	}
	
	
}