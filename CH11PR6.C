#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,n;
   clrscr();
   printf("plz enter the value to print=");
   scanf("%d",&n);
   do{
	if(i%2==0)
	{
	 printf("%d\n",i);
	}
	 i++;
     }while(i<=n);


 getch();
 }
