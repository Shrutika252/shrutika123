#include<stdio.h>
void main()
{
	int marks=0;
	printf("Enter Marks : ");
	scanf("%d",&marks);
	printf("\n");
	if (marks>=85 && marks<=100)
	{
		printf("GRADE A");
	}
	else if (marks>=70 && marks<=84)
	{
	    printf("GRADE B");	
	}
	else if (marks>=55 && marks<=69)
	{
		printf("GRADE C");	
	}
	else if (marks>=40 && marks<=54)
	{
		printf("GRADE D");	
	}
	else
	{
		printf("GRADE F");	
	}
}
