#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int i;
	int pos;
	char ch;


	
	fp=fopen("abc.txt","w");
	
	fprintf(fp,"My Captain");
	 
	fclose(fp);	
	
	fp=fopen("abc.txt","r");
		
    fseek(fp,0,SEEK_END);
    pos=ftell(fp);
    //printf("Current postion is %d\n",pos);
    i=0;
    while(i<pos)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            //printf("%c",fgetc(fp));
            ch=fgetc(fp);
            printf("%c",ch);
      }
	
	
fclose(fp);	
}
