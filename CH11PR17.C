#include<stdio.h>
#include<conio.h>
void main()
{
     int i;
     clrscr();
     for(i=2000;i<=3000;i++)
     {
	if(i%4==0)
	{
	  printf("leap years=%d\n",i);
	  }
       }
    getch();
  }