#include<stdio.h>
#include<conio.h>
main()
{
   int i=1,n,f=1;
   clrscr();
   printf("plz enter the value of n=");
   scanf("%d",&n);
   do{
      f=f*i;
      i++;
     }while(i<=n);
      printf("factorial of enterd value is =%d",f);
      getch();
      }




