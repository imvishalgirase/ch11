#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,n;
   clrscr();
   printf("Plz enetr the value of n=");
   scanf("%d",&n);
   i=n;
   do{
      printf("%d\n",i);
      i--;

	}while(i>0);
   getch();
 }
