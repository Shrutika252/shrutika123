#include<stdio.h>
void main()
{
	/*Two numbers to swap*/
	int a=20;
	int b=30;
	
	/*Logic to swap*/
	a = a + b - ( b = a );

	/*Printing swapped values*/
	printf("Value of a is : %d \n",a);
	printf("Value of b is : %d",b);
}
