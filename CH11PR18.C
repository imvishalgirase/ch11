#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,sum=0;

  clrscr();
  printf("plz enter until you want to sum");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      sum=sum+i;
     }

       printf("%d\n",sum);
       getch();
   }
