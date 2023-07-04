#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n;
   printf("Plz enter the value until u want to find=");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     if(i%2==1)
     {

	printf("%d\n",i );
	}
    }
    getch();
 }