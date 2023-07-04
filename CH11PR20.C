#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b;
   clrscr();
    printf("which number table=");
    scanf("%d",&a);
    for(b=1;b<=a;b++)

      {
	printf("%d*%d=%d\n",a,b,a*b);
	}

    getch();
    }