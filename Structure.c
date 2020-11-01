#include<stdio.h>
struct Employee{
    char emp_name[30];
    int emp_age;
    int emp_phn_no;
    float emp_salary;
   
};
void main()
{
int i;
struct Employee em[20];
	for(i=0;i<20;i++)
	{
		printf("Enter the Employee Name: ");
		scanf("%s",&em[i].emp_name);
	
		printf("Enter the Employee Age: ");
		scanf("%d",&em[i].emp_age);
		
		printf("Enter the Employee Phone Number : ");
		scanf("%d",&em[i].emp_phn_no);

		printf("Enter the Employee Salary: ");
		scanf("%f",&em[i].emp_salary);
		printf("\n");
	}
	for(i=0;i<20;i++)
	{
	printf("Name is : %s",em[i].emp_name);
	printf("\n");
	printf("Age is: %d",em[i].emp_age);
	printf("\n");
	printf("Phone Number is: %d",em[i].emp_phn_no);
	printf("\n");	
	printf("Salary is : %f",em[i].emp_salary);
	printf("\n");	
	printf("\n");

		
	}
}
