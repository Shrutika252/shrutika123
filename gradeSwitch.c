#include<stdio.h>
void main()
{
int ch;
printf("Enter your marks(0-100) :");
scanf("%d",&ch);
switch(ch/10)
   {
       case 10 :
       case 9 :
           /* Marks between 90-100 */
           printf("\n Your Grade is: A");
           break;
       case 8 :
            /* Marks between 80-89 */
           printf("\n Your Grade is: B" );
           break;
       case 7 :
           /* Marks between 70-79 */
           printf("\n Your Grade is: C" );
           break;
       case 6 :
           /* Marks between 60-69 */
           printf("\n Your Grade is: D" );
           break;
       case 5 :
            /* Marks between 50-59 */
           printf("\n Your Grade is: E" );
           break;
       case 4 :
           /* Marks between 40-59 */
           printf("\n Your Grade is: E--");
           break;
       default :
           /* Marks less than 40 */
           printf("\n You Grade is: F or Fail\n");
   }
 }
