#include<stdio.h>
int i,j,sum;
int arr[3][3];
void add();
void main()
{
printf("Enter the elements of the array(3x3):\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&arr[i][j]);
}
}
for(i=0 ;i<3 ;i++)
{
for(j=0;j<3;j++)
{
printf("%d",arr[i][j]);
}
printf("\n");
}
add();
}
void add()
{
int *ptr=&arr[3][3];
for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+*((ptr+i)+j);
            }
        }
    }

printf("Sum of diagonals is %d",sum);  
}
