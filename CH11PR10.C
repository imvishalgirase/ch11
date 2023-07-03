#include<stdio.h>
#include<conio.h>

void main()
{
  int a=1,n,i;
  clrscr();
  printf("Plz enter the first value=");
  scanf("%d",&n);
  printf("Plz tell how many=");
  scanf("%d",&i);
  do{

	    printf("%d*%d=%d\n",n,a,n*a);
	     a++;
       }while(a<=i);

	getch();
	}
